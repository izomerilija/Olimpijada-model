#ifndef AATHLETICS_H_INCLUDED
#define AATHLETICS_H_INCLUDED

#include <iostream>

#include "IRules.h"
#include "AthleticsBranch.h"
#include "AthleticsDiscipline.h"

using namespace std;

class AAthletics { // : public IRules
protected:
    AthleticsDiscipline discipline;
    // float olympicsRecord;
    int maxNumberOfParticipants;
public:
    //constructors
    AAthletics() {
        discipline = NO_DISCIPLINE;
        maxNumberOfParticipants = 10;
        //olympicsRecord = 0;
    }

    AAthletics(AthleticsDiscipline sport) { //, float record
        this->discipline = sport;
        //this->olympicsRecord = record;
    }

    //getters
	/*
	double getOlympicsRecord() const {
		return olympicsRecord;
	}
	*/

	AthleticsDiscipline getDiscipline() const {
		return discipline;
	}

	int getMaxNumberOfParticipants() const {
        return maxNumberOfParticipants;
	}
	//virtual setter, to be implemented in sub classes
    //void setDiscipline(AthleticsDiscipline sport) = 0;



};


#endif // AATHLETICS_H_INCLUDED
