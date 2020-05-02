package engine;

import java.util.HashSet;
import java.util.Set;

import competition.Athlete;
import competition.Gender;

public class AthletesSelection {

	private static final int NUMBER_OF_FEMALE_ATHLETES = 1000;
	private static final int NUMBER_OF_MALE_ATHLETES = 1000;

	private Set<Athlete> maleAthletes;
	private Set<Athlete> femaleAthletes;
	private boolean initialized = false;

	public AthletesSelection() {

	}

	public void init() {
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
