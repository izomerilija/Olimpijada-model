#ifndef ATHLETESSELECTION_H_INCLUDED
#define ATHLETESSELECTION_H_INCLUDED

#include "InitParticipants.h"
#include "Athlete.h"
#include "Gender.h"
#include "list.h"

#define NUMBER_OF_FEMALE_ATHLETES 1000
#define NUMBER_OF_MALE_ATHLETES 1000

public class AthletesSelection {
private:
	List<Athlete> maleAthletes;
    Set<Athlete> femaleAthletes;
	bool initialized = false;

public:
    AthletesSelection() {

	}

	void init() {
		if (initialized) {
			return;
		}
		maleAthletes = getAthletes(Gender.MALE, NUMBER_OF_MALE_ATHLETES);
		femaleAthletes = getAthletes(Gender.FEMALE, NUMBER_OF_FEMALE_ATHLETES);
		initialized = true;
	}

	private Set<Athlete> getAthletes(Gender gender, int numberOfFemaleAthletes) {
		Set<Athlete> athletes = new HashSet<Athlete>(numberOfFemaleAthletes);
		while (athletes.size() < numberOfFemaleAthletes) {
			Athlete athlete = SimulationHelper.getAthlete(gender);
			if (athlete == null) {
				continue;
			}
			athlete.setQualificationScore(SimulationHelper.getSportScore());
			athlete.setSport(SimulationHelper.getRandomSport());
			athletes.add(athlete);
		}
		return athletes;
	}

	public Set<Athlete> getFemaleAthletes() {
		return femaleAthletes;
	}

	public Set<Athlete> getMaleAthletes() {
		return maleAthletes;
	}

}

#endif // ATHLETESSELECTION_H_INCLUDED
