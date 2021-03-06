/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Commands/BucketMove.h>
#include "OI.h"

#include "ctre/Phoenix.h"
#include "WPILib.h"


OI::OI(): joy(new Joystick(1)), servoButton(new JoystickButton(joy, 7)) {
	// Process operator interface input here.
	servoButton->WhenPressed(new BucketMove(.5)); // opens bucket
	servoButton->WhenReleased(new BucketMove(0)); // closes bucket
}
