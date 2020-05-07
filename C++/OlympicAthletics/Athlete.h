#ifndef ATHLETE_H_INCLUDED
#define ATHLETE_H_INCLUDED

#include "InitAthletes.h"
#include "Gender.h"

using namespace std;

class Athlete {
private:
    SimulationHelper randomAthlete;
	Gender gender;
	string fullName;
	AthleticsDiscipline discipline;
	double qualificationScore;

public:

    //constructors:
    Athlete();
    Athlete(Gender gender, string fullName, AthleticsDiscipline discipline, double qualificationScore);
	Athlete(const Athlete &A);

	//getters
	Gender getGender() const;
	string getFullName() const;
	AthleticsDiscipline getDiscipline() const;
	double getQualificationScore() const;

    //setters
	void setGender (Gender sex);
	void setFullName (string name);
	void setDiscipline (AthleticsDiscipline sport);
	void setQualificationScore (double score);

	//generating random person names:
	void randomizeName();

	//generating random athletes:
    void randomizeAll();

	//operator ispisa za atletičare
	friend ostream& operator<<(ostream& os, const Athlete& atl);

};

#endif // ATHLETE_H_INCLUDED
