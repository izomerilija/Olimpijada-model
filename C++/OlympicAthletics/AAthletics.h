#ifndef AATHLETICS_H_INCLUDED
#define AATHLETICS_H_INCLUDED

#include <iostream>

#include "AthleticsBranch.h"
#include "AthleticsDiscipline.h"

using namespace std;

class AAthletics {
protected:
    AthleticsDiscipline discipline;
public:
    virtual void setDiscipline(AthleticsDiscipline d) = 0;
    virtual void

};


#endif // AATHLETICS_H_INCLUDED
