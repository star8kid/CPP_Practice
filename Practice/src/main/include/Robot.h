/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>
#include<ctre/Phownix.h>
#include<frc/WPILib.h>
#include <frc/IterativeRobot.h>
#include <frc/smartdashboard/SendableChooser.h>

class Robot : public frc::IterativeRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;
  double Absolute_Multiply(double first_num, double second_num);
  //Motor IDs
  static const int LEFT_FRONT = 1;
  static const int LEFT_BACK = 2;
  static const int RIGHT_FRONT = 3;
  static const int RIGHT_BACK = 4;

  VictorSPX fr_left{LEFT_FRONT};
  VictorSPX fr_right{RIGHT_FRONT};
  VictorSRX back_left{LEFT_BACK};
  VictorSRX back_right{RIGHT_BACK};

  frc::SpeedControllerGroup leftSide{fr_left, fr_right};
  frc::SpeedControllerGroup rightSide{back_left, back_right};

  frc::DifferentialDrive driveTrain{leftSide,rightSide};

  frc:: XboxController pilot{0};


  frc:: GenericHD :: JoyStickHand LEFT = frc::GenericHD :: kLeftHand;

 private:

};
