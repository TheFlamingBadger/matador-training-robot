/*
 * command_translator.hpp
 *
 *  Created on: 29 Oct 2024
 *      Author: joshn
 */

#ifndef COMMAND_TRANSLATOR_HPP_
#define COMMAND_TRANSLATOR_HPP_


class CCommander
{
    public:
        CCommander();
        void SendCommand( float left_wheel_speed, float right_wheel_speed );
};


#endif /* COMMAND_TRANSLATOR_HPP_ */
