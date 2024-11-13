// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drive1               motor         1               
// Drive2               motor         17              
// Drive3               motor         6               
// Drive4               motor         19              
// Drive5               motor         18              
// Drive6               motor         12              
// Controller1          controller                    
// InertialSensor       inertial      2               
// clamp                digital_out   H               
// Intake               motor_group   15, 10          
// doink                digital_out   F               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drive1               motor         1               
// Drive2               motor         17              
// Drive3               motor         6               
// Drive4               motor         19              
// Drive5               motor         18              
// Drive6               motor         12              
// Controller1          controller                    
// InertialSensor       inertial      2               
// clamp                digital_out   H               
// Intake_outake        motor_group   15, 10          
// doink                digital_out   F               
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drive1               motor         1               
// Drive2               motor         17              
// Drive3               motor         6               
// Drive4               motor         19              
// Drive5               motor         18              
// Drive6               motor         12              
// Controller1          controller                    
// InertialSensor       inertial      2               
// clamp                digital_out   H               
// Intake_outake        motor_group   15, 10          
// ---- END VEXCODE CONFIGURED DEVICES ----
// ---- START VEXCODE CONFIGURED DEVICES ----


#include "vex.h"
using namespace vex;
competition Competition;
bool ClampState = false;
bool autonRingdetector =true;
bool colorStop = false;


void Driver()
{
  startDriver();
  driveCoast();

}


void whenStarted()
{
  InertialSensor.startCalibration();
  waitUntil(!InertialSensor.isCalibrating());
  leftDriveMotors(Drive3, Drive2, Drive1);
  rightDriveMotors(Drive6, Drive5, Drive4);
  Intake.setStopping(hold);
  rotation Rotation3 = rotation(PORT3,false);
  Rotation3.resetPosition();
  enableDrivetrain();
}



void IntakeIn(){Intake.spin(forward, 11 , voltageUnits::volt);}
void IntakeOut(){Intake.spin(forward, -11 , voltageUnits::volt);}
void IntakeStop(){Intake.spin(forward, 0 , voltageUnits::volt);}



  
void extendDoink(){
  doink.set(true);
}
void retractDoink(){
  doink.set(false);
}

void Clamping(){
  if(ClampState == false){
    clamp.set(true);
    ClampState = true;
  }
  else if(ClampState == true){
    clamp.set(false);
    ClampState = false;
  }
}




void auton() {
  clamp.set(true);
  move(-31);
  clamp.set(false);
  wait(1, sec);
  turn(-84);

}

int main() 
{
  vexcodeInit();
  whenStarted();
  
  Controller1.ButtonR1.pressed(IntakeIn);
  Controller1.ButtonL1.pressed(IntakeOut);
  Controller1.ButtonL1.released(IntakeStop);
  Controller1.ButtonR1.released(IntakeStop);

  Controller1.ButtonRight.pressed(extendDoink);
  Controller1.ButtonRight.released(retractDoink);
  Controller1.ButtonY.pressed(Clamping);

 
  Competition.drivercontrol(Driver);
  Competition.autonomous(auton);
  //Competition.autonomous(AutonSelector); //for potentiometer
}