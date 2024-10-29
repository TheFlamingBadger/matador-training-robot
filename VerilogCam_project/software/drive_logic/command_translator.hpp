/*
 * command_translator.hpp
 *
 *  Created on: 29 Oct 2024
 *      Author: joshn
 */

#ifndef COMMAND_TRANSLATOR_H
#define COMMAND_TRANSLATOR_H

#include <stdint.h>  // For fixed-width integer types

class CCommander {
public:
    // Constructor
    CCommander();

    // Sets wheel speeds, prepares JSON, and sends it out one character at a time
    void SendCommand(float left_wheel_speed, float right_wheel_speed);

private:
    float m_left_wheel_speed;
    float m_right_wheel_speed;

    char m_json_command[50];    // Static buffer for the JSON command
    int  m_command_length;      // Length of the JSON command string
    bool m_cmd_ready;           // Indicates if the command is ready to transmit

    void prepareJsonCommand();  // Helper function to build the JSON string
    void sendNextAscii();       // Sends out ASCII characters one at a time
};

#endif // COMMAND_TRANSLATOR_H
