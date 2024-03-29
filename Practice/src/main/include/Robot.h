/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>
#include <ctre/Phoenix.h>
#include <frc/WPILib.h>
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
  //Motor IDs
  static const int LEFT_FRONT = 1;
  static const int LEFT_BACK = 2;
  static const int RIGHT_FRONT = 3;
  static const int RIGHT_BACK = 4;
  static constexpr double DEADZONE = 0.1;

  WPI_VictorSPX fr_left{LEFT_FRONT};
  WPI_VictorSPX fr_right{RIGHT_FRONT};
  WPI_TalonSRX back_left{LEFT_BACK};
  WPI_TalonSRX back_right{RIGHT_BACK};

  //frc::SpeedControllerGroup leftSide{fr_left, fr_right};
  //frc::SpeedControllerGroup rightSide{back_left, back_right};

  frc::MecanumDrive driveTrain{fr_left,back_left,fr_right,back_right};

  frc::XboxController pilot{0};
  frc::GenericHID::JoystickHand LEFT = frc::GenericHID :: kLeftHand;
  frc::GenericHID::JoystickHand RIGHT= frc::GenericHID :: kRightHand;


 private:

};
