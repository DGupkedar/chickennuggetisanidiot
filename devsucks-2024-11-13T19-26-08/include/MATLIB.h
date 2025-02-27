
//Drivetrain set up:

void leftDriveMotors();                    // Set up for the left motors. First motor listed will be the encoding motor, so it should be the one closest to the center wheel. To use PTO, just call it again with or without the PTO motor.

void rightDriveMotors();                   // Set up for the right motors. First motor listed will be the encoding motor, so it should be the one closest to the center wheel. To use PTO, just call it again with or without the PTO motor.

//Begin drivetrain control:

void enableDrivetrain();                   // Starts the task which does driver and autonomous control. Must be called to use the drivetrain functions below.

void startDriver();                        // Activates driver control.

//Controller style functions:

void setCubicArcadeControl();              // Activates arcade joystick style, with cubic output curves. On by default.

void setCubicTankControl();                // Activates tank joystick style, with cubic output curves.

void setArcadeControl();                   // Activates arcade joystick style.

void setTankControl();                     // Activates tank joystick style.

//Autnonomous movement functions:

void move(double Distance);                // Moves the robot a specified distance in inches.

void moveAsync(double Distance);           // Moves the robot a specified ditance in inches without stopping the program.

void turn(double Angle);                   // Turns the robot to a specified heading in degrees.

void turnAsync(double Angle);              // Turns the robot to a specified heading in degrees without stopping the program.

void swingLeft(double Angle);              // Does a turn to a heading in degrees around the left side of the drivetrain.

void swingLeftAsync(double Angle);         // Does a turn to a heading in degrees around the left side of the drivetrain without stopping the program.

void swingRight(double Angle);             // Does a turn to a heading in degrees around the right side of the drivetrain.

void swingRightAsync(double Angle);        // Does a turn to a heading in degrees around the right side of the drivetrain without stopping the program.

bool isMoving();                           // Returns true when the robot is doing a movement.

bool isTurning();                          // Returns true when the robot is doing a turn.

bool isSwinging();                         // Returns true when the robot is swinging. Lol.         

//PD and motion profiling constants:

void setMoveConstants(double moveKp, double moveKd);                                     // Sets move values, can also be changed in .cpp.

void setMovePowerLimit(double movePowerLimit);                                           // Sets move values, can also be changed in .cpp.

void setMoveThreshold(double moveThreshold);                                             // Sets move values, can also be changed in .cpp.

void setMoveProfile(double start, double end, double acceleration, double deceleration); // Sets move values, can also be changed in .cpp.

void setTurnConstants(double turnKp, double turnKd);                                     // Sets turn values, can also be changed in .cpp.

void setTurnPowerLimit(double turnPowerLimit);                                           // Sets turn values, can also be changed in .cpp.

void setTurnThreshold(double turnThreshold);                                             // Sets turn values, can also be changed in .cpp.

void setTurnProfile(double end, double deceleration);                                    // Sets turn values, can also be changed in .cpp.

void setSwingConstants(double swingKp, double swingKd);                                  // Sets swing values, can also be changed in .cpp.

void setSwingPowerLimit(double swingPowerLimit);                                         // Sets swing values, can also be changed in .cpp.

void setSwingThreshold(double swingThreshold);                                           // Sets swing values, can also be changed in .cpp.

void setSwingProfile(double end, double deceleration);                                   // Sets swing values, can also be changed in .cpp.

//Drive Motor control:

void driveLeft(double volts);              // Sets drive motors on the left side to a voltage from 0 to 12 volts.

void driveRight(double volts);             // Sets drive motors on the right side to a voltage from 0 to 12 volts.

void driveSpin();                          // Sets all the drive motors to "spin", same as using the vex function: motor.spin(forward);

void driveLeftVelocity(double Velocity);   // Sets the drive motors on the left side to spin at a specified % velocity.

void driveRightVelocity(double Velocity);  // Sets the drive motors on the right side to spin at a specified % velocity.

void driveStop();                          // Sets all the drive motors to "stop", also stops any PD loop that is running.

void driveTorque(double torque);           // Sets all the drive motors to a certain torque, does not affect driver control, PD movements, or voltage actions.

void driveCoast();                         // Sets stopping of all drive motors to "coast".

void driveBrake();                         // Sets stopping of all drive motors to "brake".

void driveHold();                          // Sets stopping of all drive motors to "hold".

//Inertial sensor:

double heading();                          // Returns heading in degrees.

double coterm(double angle);               // Returns the closest coterminal angle to the current heading given an angle -180 to 180.

void setStartingAngle(double Angle);       // Sets the starting angle, should be set before enabling drivetrain control.

void setTimeoutTime(double time);

// All possible configurations of the drive train, dont worry about this.
void leftDriveMotors(vex::motor&);
void leftDriveMotors(vex::motor&, vex::motor&);
void leftDriveMotors(vex::motor&, vex::motor&, vex::motor&);
void leftDriveMotors(vex::motor&, vex::motor&, vex::motor&, vex::motor&);
void rightDriveMotors(vex::motor&);
void rightDriveMotors(vex::motor&, vex::motor&);
void rightDriveMotors(vex::motor&, vex::motor&, vex::motor&);
void rightDriveMotors(vex::motor&, vex::motor&, vex::motor&, vex::motor&);