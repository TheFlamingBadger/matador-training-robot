#include "drive_logic_booyah.hpp"


CDriveComputer::CDriveComputer()
: m_follow_distance( DEFAULT_DISTANCE ),
  m_left_wheel_speed( 0.0 ),
  m_right_wheel_speed( 0.0 ),
  m_commander( new CCommander() ),
  m_no_red( true ),
  m_ir_valid( false ),
  m_detected_direction( 0 ),
  m_average_distance( 0 ),
  m_pitch( 0 ),
  m_magnitude( 0 ),
  m_ir_command( 0 )
{}


CDriveComputer::~CDriveComputer()
{
    delete m_commander;
}


void CDriveComputer::IncrementFollowDist()
{
    if( m_follow_distance < 100 )
    {
        m_follow_distance += 10;
    }
}


void CDriveComputer::DecrementFollowDist()
{
    if( m_follow_distance > 20 )
    {
        m_follow_distance -= 10;
    }
}


float CDriveComputer::CalculateLeftSpeed()
{   
    if( m_no_red )
    {
        return 0.0;
    }
        
    return m_detected_direction / MAX_DIRECTION;
}


float CDriveComputer::CalculateRightSpeed()
{   
    if( m_no_red )
    {
        return 0.0;
    }

    return ( MAX_DIRECTION - m_detected_direction ) / MAX_DIRECTION;
}


void CDriveComputer::UpdateSensors( bool no_red, bool ir_valid, int detected_direction, int average_distance, int pitch, int magnitude, int ir_command )
{
    m_no_red = no_red;
    m_ir_valid = ir_valid;
    m_detected_direction = detected_direction;
    m_average_distance = average_distance;
    m_pitch = pitch;
    m_magnitude = magnitude;
    m_ir_command = ir_command;
}


void CDriveComputer::UpdateWheelSpeeds()
{   
    bool pause;
    int too_close = ( m_average_distance < m_follow_distance );
    
    if( m_ir_valid ) {
        switch( m_ir_command )
        {   
            case POWER:         pause = true; break;
            case PLAY_PAUSE:    pause = false; break;
            case CHANNEL_UP:    IncrementFollowDist(); break;
            case CHANNEL_DOWN:  DecrementFollowDist(); break;
        }
    }

    if( !m_no_red && !too_close && !pause )
    {
        m_left_wheel_speed = CalculateLeftSpeed();
        m_right_wheel_speed = CalculateRightSpeed();
        m_commander->SendCommand( m_left_wheel_speed, m_right_wheel_speed );
    }
}
