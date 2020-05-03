package sport.running;

import java.util.HashSet;
import java.util.Set;

import competition.Athlete;
import competition.Gender;

public class Race {

	private Gender gender;
	private Set<Athlete> athletes;
	private ARunning trackAndField;

	public Race(Gender gender, ARunning trackAndField) {
		if (gender == null || trackAndField == null) {
			throw new NullPointerException("All properties are mandatory!");
		}
		this.gender = gender;
		this.trackAndField = trackAndField;
	}

	public Gender getGender() {
		return gender;
	}

	public boolean register(Athlete athlete) {
		if (athlete == null) {
			throw new NullPointerException("Athlete is mandatory!");
		}
		if (athlete.getGender() != gender) {
			return false;
		}
		if (athletes == null) {
			athletes = new HashSet<Athlete>();
		}
		athletes.add(athlete);
		return true;
	}

	public ARunning getTrackAndField() {
		return trackAndField;
	}
}
