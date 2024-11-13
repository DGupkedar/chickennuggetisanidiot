#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor Drive1 = motor(PORT1, ratio6_1, true);
motor Drive2 = motor(PORT17, ratio6_1, true);
motor Drive3 = motor(PORT6, ratio6_1, true);
motor Drive4 = motor(PORT19, ratio6_1, false);
motor Drive5 = motor(PORT18, ratio6_1, false);
motor Drive6 = motor(PORT12, ratio6_1, false);
controller Controller1 = controller(primary);
inertial InertialSensor = inertial(PORT2);
digital_out clamp = digital_out(Brain.ThreeWirePort.H);
motor IntakeMotorA = motor(PORT15, ratio6_1, false);
motor IntakeMotorB = motor(PORT10, ratio6_1, true);
motor_group Intake = motor_group(IntakeMotorA, IntakeMotorB);
digital_out doink = digital_out(Brain.ThreeWirePort.F);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}