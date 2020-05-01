package competition;

public abstract class Athlete {
	
	private Gender gender;
	private String fullName;

	public Athlete(Gender gender, String fullName) {
		this.gender = gender;
		this.fullName = fullName;
	}
	
	public Gender getGender() {
		return this.gender;
	}
	
	public String getFullName() {
		return fullName;
	}
	
}
