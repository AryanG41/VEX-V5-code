#pragma once

#include <vector>

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(14);
inline pros::Motor intake2(15);
inline pros::MotorGroup intake_motors({14,15});
inline pros::Motor lift(19);
inline pros::Motor lift2(20);
inline pros::MotorGroup lift_motors({19,20});
inline ez::Piston claw('A');

// inline pros::adi::DigitalIn limit_switch('A');