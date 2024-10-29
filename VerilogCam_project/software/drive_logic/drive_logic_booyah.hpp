#ifndef DRIVE_LOGIC
#define DRIVE_LOGIC

#include "command_translator.hpp"

// Parameters
#define AMPLITUDE_THRESHOLD 4
#define MAX_CLAP_PITCH 4
#define MIN_WHISTLE_PITCH 12
#define DEFAULT_DISTANCE 20
#define MAX_DIRECTION 25

// IR Keys
#define POWER 0x2
#define PLAY_PAUSE 0x6
#define CHANNEL_UP 0xa
#define CHANNEL_DOWN 0xe


class CDriveComputer
{
    public:
        CDriveComputer();
        ~CDriveComputer();

        // Updates the sensor values
        // @param no_red Boolean representing whether any red is detected by the camera
        // @param ir_valid Boolean representing whether the IR command data is valid
        // @param detected_direction The FOV heading of detected red pixels
        // @param average_distance The averaged ultrasonic distance reading
        // @param pitch The peak pitch detected by the microphone
        // @param magnitude Magnitude of the peak pitch detected by the microphone
        // @param ir_command Four bit hex value corresponding to the IR remote input
        void UpdateSensors( bool no_red, bool ir_valid, int detected_direction, int average_distance, int pitch, int magnitude, int ir_command );

        // Calculates and outputs wheel speeds based on the current sensor values
        void UpdateWheelSpeeds();

    private:
        // Sensor Variables
        bool m_no_red;                // Whether any red is detected by the camera
        bool m_ir_valid;              // Whether ir command is valid
        int m_detected_direction;     // FOV heading of detected red pixels
        int m_average_distance;       // Averaged ultrasonic distance reading
        int m_pitch;                  // Peak pitch detected by the microphone
        int m_magnitude;              // Magnitude of the peak pitch detected by the microphone
        int m_ir_command;             // Four bit hex value corresponding to the IR remote input

        // Object Variables
        int m_follow_distance;      // The distance the robot will follow at
        float m_left_wheel_speed;   // The current speed of the left wheels
        float m_right_wheel_speed;  // The current speed of the right wheels
        CCommander* m_commander;    // The class which translates and issues commands

        // Increases the follow distance by 10cm up to a maximum of 100cm
        void IncrementFollowDist();

        // Decreases the follow distance by 10cm up to a minimum of 20cm
        void DecrementFollowDist();

        // Calculates the left wheel speed
        float CalculateLeftSpeed();

        // Calculates the right wheel speed
        float CalculateRightSpeed();
};

#endif