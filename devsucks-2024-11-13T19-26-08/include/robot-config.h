using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor Drive1;
extern motor Drive2;
extern motor Drive3;
extern motor Drive4;
extern motor Drive5;
extern motor Drive6;
extern controller Controller1;
extern inertial InertialSensor;
extern digital_out clamp;
extern motor_group Intake;
extern digital_out doink;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );