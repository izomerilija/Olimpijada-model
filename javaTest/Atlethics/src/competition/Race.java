package competition;

import java.util.Set;

public class Race {
	private Gender gender;
	private Set<Athlete> athletes;

	public Race(Gender gender) {
		this.gender = gender;
	}
	
	public Gender getGender() {
		return gender;
	}
	
	public boolean register(Athlete athlete) {
		athletes.add(athlete);
		return false;
	}
}
