#ifndef ATHLETE_H_INCLUDED
#define ATHLETE_H_INCLUDED

#include "InitAthletes.h"
#include "Gender.h"
#include "AthleticsDisciplines.h"


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
    Athlete() {
        gender = NOT_SPECIFIED;
        fullName = " ";
        discipline = NO_DISCIPLINE;
        double qualificationScore = 0.00;
    }
    Athlete(Gender gender, string fullName, AthleticsDiscipline discipline, double qualificationScore) {
		this->gender = gender;
		this->fullName = fullName;
		this->discipline = discipline;
		this->qualificationScore = qualificationScore;
	}
	Athlete (const Athlete &A){
        gender = A.gender;
        fullName = A.fullName;
        discipline = A.discipline;
        qualificationScore = A.qualificationScore;
	}

	//getters
	Gender getGender() const {
		return gender;
	}

	string getFullName() const {
		return fullName;
	}

	AthleticsDiscipline getDiscipline(){
        return discipline;
	}

	double getQualificationScore(){
        return qualificationScore;
	}

    //setters
	void setGender (Gender sex){
        gender = sex;
	}

	void setFullName (string name){
        fullName = name;
	}

	void setDiscipline (AthleticsDiscipline sport) {
		discipline = sport;
	}

	void setQualificationScore(double score) {
		this->qualificationScore = score;
	}

	//generating random person names:
	void randomizeName()
	{
	    //creating a male name + lastname
        if (gender == Gender::MALE)
            this->fullName = randomAthlete.randomString(1) + " " + randomAthlete.randomString(3);

        //creating a female name + lastname
        if (gender == Gender::FEMALE)
            this->fullName = randomAthlete.randomString(2) + " " + randomAthlete.randomString(3);
	}

	//generating random athletes:
    void randomizeAll()  //name, score and competing sport (chosen discipline)
	{
        randomizeName();
        this->qualificationScore = randomAthlete.getQualificationScore(); //simulation helper, generates q scores
        this->discipline = randomAthlete.getRandomSport(); //simulation helper, assigns competing sport
	}

	//operator ispisa za atletičare
	friend ostream& operator<<(ostream& os, const Athlete& atl);

};

ostream& operator<<(ostream& os, const Athlete& atl){
    os << atl.getFullName() << ", compete " << athleticsDiscipline[atl.discipline] << " with qualification score: " << to_string(atl.qualificationScore);
    return os;
}

#endif // ATHLETE_H_INCLUDED
