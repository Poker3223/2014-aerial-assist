#ifndef ROBOTMAP_H
#define ROBOTMAP_H

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// #define LEFTMOTOR 1
// #define RIGHTMOTOR 2
#define LEFTMOVE1  1
#define LEFTMOVE2  2
#define RIGHTMOVE1 3
#define RIGHTMOVE2 4

#define CATAPULT_MODULE 3
#define CATAPULT_FORWARDRELAY 1
#define CATAPULT_REVERSERELAY 2

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// #define RANGE_FINDER_PORT 1
// #define RANGE_FINDER_MODULE 1

#include "Joysticks/xbox.controller_"

#endif