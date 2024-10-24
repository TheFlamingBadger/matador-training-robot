// Verilog Interface:
// input wire                  clk,                 1
// input wire 				   no_red,              1
// input wire [3:0]            detected_direction,  4
// input wire [3:0]            average_distance,    4
// input wire [3:0]            pitch,               3
// input wire [3:0]            amplitude,           3
// input wire [31:16]		   ir_command,          16

// output [5:0]                left_wheel_speed,    6
// output [5:0]                right_wheel_speed,   6
// output                      valid                1

// Parameters
#define AMPLITUDE_THRESHOLD 4
#define MAX_CLAP_PITCH 4
#define MIN_WHISTLE_PITCH 12
#define FOV 25
#define DEFAULT_DISTANCE 20
#define MAX_DIRECTION 23
#define SPEED_SCALE_FACTOR 50

// IR Keys
#define PLAY_PAUSE 0x619e68b6
#define CHANNEL_UP 0xa15e68b6
#define CHANNEL_DOWN 0xe11e68b6


void increment_follow_dist( int* follow_distance )
{
    if ( *follow_distance < 100 )
    {
        *follow_distance += 10;
    }
}


void decrement_follow_dist( int* follow_distance )
{
    if ( *follow_distance > 20 )
    {
        *follow_distance -= 10;
    }
}


int calculate_left_speed( detected_direction )
{
    return ( SPEED_SCALE_FACTOR * detected_direction ) / MAX_DIRECTION;
}


int calculate_left_speed( detected_direction )
{
    return ( SPEED_SCALE_FACTOR * ( MAX_DIRECTION - detected_direction )) / MAX_DIRECTION;
}


void drive_logic( int clk, int no_red, int detected_direction, int average_distance, int pitch, int ir_command )
{   
    const int follow_distance = DEFAULT_DISTANCE; // Need to make static?

    int pause = 0;
    int left_wheel_speed = 0;
    int right_wheel_speed = 0;
    int too_close = ( average_distance < follow_distance );
    
    switch( ir_command )
    {
        case PLAY_PAUSE:    pause = !pause; break;
        case CHANNEL_UP:    increment_follow_dist( &follow_distance ); break;
        case CHANNEL_DOWN:  decrement_follow_dist( &follow_distance ); break;
    }

    if( !no_red && !too_close && !pause )
    {
        int left_wheel_speed = calculate_left_speed( detected_direction );
        int right_wheel_speed = calculate_right_speed( detected_direction );
    }

    // Output wheel speeds
    // Output valid = 1
}