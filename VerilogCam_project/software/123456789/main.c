/////*
//// * main.c
//// *
//// *  Created on: 30 Oct 2024
//// *      Author: joshn
//// */
////

#include <stdio.h>
#include <unistd.h>  // For usleep
#include <stdint.h>
#include <math.h>
#include "system.h"
#include "altera_avalon_pio_regs.h"

#define OUTLIER_THRESHOLD 3.0f
#define PIO_OUT_BASE 0x81040
#define MEDIAN_FILTER_WINDOW 5   //window size for median filter

// exponential averaging function
float exponential_averaging(float current_distance, float previous_average, float alpha) {
    return alpha * current_distance + (1 - alpha) * previous_average;
}

// calculate the median of a window
float calculate_median(float *window, int size) {
    //sorting algorithim for median calculation
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (window[i] > window[j]) {
                float temp = window[i];
                window[i] = window[j];
                window[j] = temp;
            }
        }
    }
    // Return median
    return window[size / 2];
}
// function to see if outlier, return bool
int is_outlier(float value, float average, float stddev) {
    return fabs(value - average) > (OUTLIER_THRESHOLD * stddev);
}

int main(void) {
    float input = 0;
    float previous_average = 0;
    float window[MEDIAN_FILTER_WINDOW] = {0};   // Buffer for median filter
    int window_index = 0;
    int count = 0;
    float sum = 0, sum_sq = 0;

    while (1) {
        input = (float)IORD_ALTERA_AVALON_PIO_DATA(PIO_OUT_BASE);

        // Calculate rolling mean and standard deviation
        sum += input;
        sum_sq += input * input;
        count++;

        float mean = sum / count;
        float variance = (sum_sq / count) - (mean * mean);
        float stddev = sqrt(variance);

        // Outlier rejection
        if (!is_outlier(input, mean, stddev)) {
            // Add reading to median filter window
            window[window_index] = input;
            window_index = (window_index + 1) % MEDIAN_FILTER_WINDOW;

            //if enough readings are available apply median filter
            float filtered_value = input;
            if (count >= MEDIAN_FILTER_WINDOW) {
                filtered_value = calculate_median(window, MEDIAN_FILTER_WINDOW);
            }

            previous_average = exponential_averaging(filtered_value, previous_average, 0.1f);

//            printf("%f\n", previous_average);

            // Write the pio out and cast to an int
            IOWR_ALTERA_AVALON_PIO_DATA(PIO_OUT_BASE, (int)previous_average);
        } else {
//            printf("Outlier detected: %f\n", input);
        }

        usleep(1000);
    }
}

