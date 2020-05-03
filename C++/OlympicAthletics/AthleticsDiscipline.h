#ifndef ATHLETICSDISCIPLINE_H_INCLUDED
#define ATHLETICSDISCIPLINE_H_INCLUDED

#include "AthleticsBranch.h"
#define NUMBER_OF_A_DISCIPLINES 22 // Olympic Athletics Disciplines
#define NUMBER_OF_R_DISCIPLINES 14 // Olympic Running Disciplines
#define NUMBER_OF_J_DISCIPLINES 4 // Olympic Jumping Disciplines
#define NUMBER_OF_T_DISCIPLINES 4 // Olympic Throwing Disciplines

using namespace std;

enum AthleticsDiscipline {

    NO_DISCIPLINE,

    RUNNING_SPRINT_60, RUNNING_SPRINT_100, RUNNING_SPRINT_200, RUNNING_SPRINT_400,
    RUNNING_MIDDLE_800, RUNNING_MIDDLE_1500, RUNNING_MIDDLE_3000,
    RUNNING_HURDLES_100, RUNNING_HURDLES_110, RUNNING_HURDLES_400,
    RUNNING_LONG_5000, RUNNING_LONG_10000, RUNNING_STEEPLECHASE_3000, RUNNING_MARATHON,

	LONG_JUMP, HIGH_JUMP, POLE_JUMP, TRIPLE_JUMP,

	JAVELIN_THROW, SHOTPUT_THROW, DISC_THROW, HAMMER_THROW
};

char athleticsDiscipline[NUMBER_OF_A_DISCIPLINES][50] = { "Sprint 60m", "Sprint 100m", "Sprint 200m", "Sprint 400m",
     "Middle 800m", "Middle 1500m", "Middle 3000m",
     "Hurdles 100m (FEMALE)", "Hurdles 110m (MALE)", "Hurdles 400m",
     "Long 5000m", "Long 10000m",
     "Steeplechase 3000m", "Marathon 42100m",

     "High jump", "Long jump", "Tripple jump", "Pole jump",

     "Javelin throw", "Shot-put throw", "Disc throw", "Hammer throw",
};

#endif // ATHLETICSDISCIPLINE_H_INCLUDED
