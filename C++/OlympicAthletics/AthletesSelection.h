#ifndef ATHLETESSELECTION_H_INCLUDED
#define ATHLETESSELECTION_H_INCLUDED

#include "Athlete.h"
#include "Gender.h"
#include "list.h"

#define NUMBER_OF_FEMALE_ATHLETES 500
#define NUMBER_OF_MALE_ATHLETES 500

class AthletesSelection {
protected:
	List<Athlete> maleAthletes;
    List<Athlete> femaleAthletes;
	bool initialized;

public:
    //constructors
    AthletesSelection();
    AthletesSelection(List<Athlete> males, List<Athlete> females, bool init);
    AthletesSelection(const AthletesSelection &Athletes);

    //metode


	void init() {
		if (initialized) {
			return;
		}
		maleAthletes = getAthletes(Gender::MALE, NUMBER_OF_MALE_ATHLETES);
		femaleAthletes = getAthletes(Gender::FEMALE, NUMBER_OF_FEMALE_ATHLETES);
		initialized = true;
	}


	List<Athlete> getAthletes(Gender gender, int numberOfAthletes) {
		List<Athlete> athletes;
		int i = 0;
		while (athletes.size() < numberOfAthletes) {
			Athlete athlete = getAthlete(gender);
			athletes.add(i, athlete);
			i++;
		}
		return athletes;
	}


	List<Athlete> getFemaleAthletes() const {
		return femaleAthletes;
	}

	List<Athlete> getMaleAthletes() const {
		return maleAthletes;
	}

	Athlete getAthlete(Gender gender) {
	    Athlete athlete;
	    SimulationHelper helper;

        if (gender == Gender::MALE) {
            //kreiranje muskog imena sa nekim prezimenom
            athlete.setFullName(helper.randomString(1) + " " + helper.randomString(3));
        } else {
            //kreiranje zenskog imena sa nekim prezimenom
            athlete.setFullName(helper.randomString(2) + " " + helper.randomString(3));
        }
        athlete.setGender(gender);
        athlete.setDiscipline(helper.getRandomSport());
        athlete.setQualificationScore(helper.getQualificationScore());
        return athlete;
	}

};

#endif // ATHLETESSELECTION_H_INCLUDED
