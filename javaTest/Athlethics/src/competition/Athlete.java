package competition;

import sport.AthleticsDiscipline;

public class Athlete {

	private Gender gender;
	private String fullName;
	private AthleticsDiscipline discipline;
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

	public void setDiscipline(AthleticsDiscipline sport) {
		this.discipline = sport;
	}

	public AthleticsDiscipline getDiscipline() {
		return this.discipline;
	}

	public double getQualificationScore() {
		return qualificationScore;
	}

	public void setQualificationScore(double score) {
		this.qualificationScore = score;
	}

	@Override
	public String toString() {
		return new StringBuilder().append(fullName).append(", compete ").append(discipline).append(" with qualification score: ").append(qualificationScore)
				.toString();
	}
}
