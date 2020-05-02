package competition;

import sport.AthleticsSport;

public class Athlete {

	private Gender gender;
	private String fullName;
	private AthleticsSport sport;
	private double qualificationScore;

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

	public void setSport(AthleticsSport sport) {
		this.sport = sport;
	}

	public AthleticsSport getSport() {
		return this.sport;
	}

	public double getQualificationScore() {
		return qualificationScore;
	}

	public void setQualificationScore(double score) {
		this.qualificationScore = score;
	}

	@Override
	public String toString() {
		return new StringBuilder().append(fullName).append(", compete ").append(sport).append(" with qualification score: ").append(qualificationScore)
				.toString();
	}
}
