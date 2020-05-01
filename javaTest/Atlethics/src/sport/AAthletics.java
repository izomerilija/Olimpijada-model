package sport;

public class AAthletics {

	protected AtleticsBranch branch;
	
	public AAthletics(AtleticsBranch branch) {
		this.branch = branch;
	}
	
	@Override
	public String toString() {
		return "Discipline: " +  branch.toString();
	}
}
