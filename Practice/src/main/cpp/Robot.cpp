/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Robot.h"

#include <iostream>

#include <frc/smartdashboard/SmartDashboard.h>

// the "Robot::" will add the function multiply to the class robot

double Robot::Absolute_Multiply(double first_num, double second_num){
  double result = first_num * second_num;
  if (result < 0){
  result *= -1;
  }
  return result;
}






// Code that activates upon starting up the robot
void Robot::RobotInit() {

}
//Code that is repeated for everymode the robot is in
void Robot::RobotPeriodic() {


}

//Code that activates to make the robot 
void Robot::AutonomousInit() {

}

void Robot::AutonomousPeriodic() {

}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() { return frc::StartRobot<Robot>(); }
#endif
