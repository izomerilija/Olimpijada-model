package sport;

public abstract class AAthletics {

	protected AthleticsSport sport;
	
	public AAthletics(AthleticsSport sport) {
		this.sport = sport;
	}
	
	@Override
	public String toString() {
		return "Sport: " +  sport.toString();
	}
}
