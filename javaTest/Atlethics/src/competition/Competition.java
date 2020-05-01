package competition;

import sport.AAthletics;

public abstract class Competition {

	private AAthletics discipline;
	
	public Competition(AAthletics discipline) {
		if(discipline == null) {
			throw new NullPointerException("Discipline is mandatory!");
		}
		this.discipline = discipline;
	}
	
	public AAthletics getDiscipline() {
		return discipline;
	}
	
	@Override
	public String toString() {
		return "  Competition: " + discipline.toString();
	}
	
}
