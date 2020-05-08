#ifndef ARUNNING_H_INCLUDED
#define ARUNNING_H_INCLUDED

#include "TrackType.h"
#include "AAthletics.h"

#define DISTANCE60M 60

#define MAX_SPRINT_DISTANCE 400
#define MAX_MIDDLE_DISTANCE 3000
#define MAX_LONG_DISTANCE 10000


class ARunning : public AAthletics {
protected:
    int distance;
public:
    ARunning(AthleticsDiscipline discipline, int d) : AAthletics(discipline){
        this->distance = d;
    }
};


#endif // ARUNNING_H_INCLUDED
