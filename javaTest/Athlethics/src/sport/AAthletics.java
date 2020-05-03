package sport;

public abstract class AAthletics implements IRules {

	protected AthleticsDiscipline discipline;
	protected double worldRecord;
	protected double olimpicsRecord;

	public AAthletics(AthleticsDiscipline sport) {
		this.discipline = sport;
	}

	public double getWorldRecord() {
		return worldRecord;
	}

	public double getOlimpicsRecord() {
		return olimpicsRecord;
	}

	public AthleticsDiscipline getDiscipline() {
		return discipline;
	}
	
	@Override
	public String toString() {
		return "Sport: " + discipline.toString();
	}

}
