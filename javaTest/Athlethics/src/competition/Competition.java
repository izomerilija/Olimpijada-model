package competition;

import java.util.ArrayList;
import java.util.List;

import sport.AAthletics;

public abstract class Competition {

	private AAthletics sport;
	private Gender gender;
	private List<Athlete> athletes;

	public Competition(Gender gender, AAthletics sport) {
		if (sport == null) {
			throw new NullPointerException("Sport is mandatory!");
		}
		this.sport = sport;
		this.gender = gender;
	}

	public AAthletics getSport() {
		return sport;
	}

	public Gender getGender() {
		return gender;
	}

	public boolean registerAthlete(Athlete athlete) {
		if (athletes == null) {
			athletes = new ArrayList<Athlete>();
		}
		if (gender != athlete.getGender()) {
			System.out.println("The gender is not as required!");
			return false;
		}
		if (sport.getDiscipline() != athlete.getDiscipline()) {
			System.out.println("The discipline is not as required!");
			return false;
		}
		int athletesPosition = 0;
		boolean registered = false;
		for (Athlete registeredAthlete : athletes) {
			if (athlete.getQualificationScore() > registeredAthlete.getQualificationScore()) {
				athletes.add(athletesPosition, athlete);
				registered = true;
				break;
			}
			athletesPosition++;
		}
		// if athlete has the worst score
		if (!registered) {
			athletes.add(athlete);
		}
		return true;
	}

	public List<Athlete> getParticipans() {
		if (athletes == null) {
			return new ArrayList<Athlete>();
		}
		if (athletes.size() < sport.getMaxNumberOfParticipans()) {
			return athletes;
		}
		return athletes.subList(0, sport.getMaxNumberOfParticipans());
	}
	
	@Override
	public String toString() {
		StringBuilder builder = new StringBuilder().append("Competition: ").append(sport.toString()).append("\n").append("Participans: ").append("\n");
		
		for (int i = 0; i < athletes.size(); i++) {
			Athlete athlete = athletes.get(i);
			if (i == sport.getMaxNumberOfParticipans()) {
				builder.append("-------").append("\n");
			}
			if (i < sport.getMaxNumberOfParticipans()) {
				builder.append("  [+] ").append(i+1).append(": ");
			} else {
				builder.append("  [-]: ");
			}
			builder.append("    ").append(athlete.toString()).append("\n");
		}
		return builder.toString();
	}

}
