package competition;

import java.util.HashMap;
import java.util.Map;

import sport.AthleticsDiscipline;

public class Meeting {

	private Map<AthleticsDiscipline, Competition> maleCompetitionMap;
	private Map<AthleticsDiscipline, Competition> femaleCompetitionMap;

	private String name;

	public boolean add(Competition competition) {
		if (competition == null) {
			throw new NullPointerException("Competition is mandatory!");
		}
		Gender competitionGender = competition.getGender();
		if (competitionGender == Gender.MALE && maleCompetitionMap == null) {
			maleCompetitionMap = new HashMap<AthleticsDiscipline, Competition>();
		}
		if (competitionGender == Gender.FEMALE && femaleCompetitionMap == null) {
			femaleCompetitionMap = new HashMap<AthleticsDiscipline, Competition>();
		}
		AthleticsDiscipline discipline = competition.getSport().getDiscipline();
		Map<AthleticsDiscipline, Competition> competitionMap = competitionGender == Gender.MALE ? maleCompetitionMap : femaleCompetitionMap;
		
		if (competitionMap.containsKey(discipline)) {
			System.out.println("The competition for " + discipline + " is already added. Ignore.");
			return false;
		}
		competitionMap.put(discipline, competition);
		return true;
	}

	public boolean register(Athlete athlete) {
		if (athlete == null) {
			return false;
		}
		Gender athleteGender = athlete.getGender();
		Map<AthleticsDiscipline, Competition> competitionMap = athleteGender == Gender.MALE ? maleCompetitionMap : femaleCompetitionMap;
		
		AthleticsDiscipline athleteDiscipline = athlete.getDiscipline();
		if (competitionMap == null || competitionMap.isEmpty() || !competitionMap.containsKey(athleteDiscipline)) {
			System.out.println("There are no competition for " + athleteDiscipline);
			return false;
		}
		Competition competition = competitionMap.get(athleteDiscipline);
		competition.registerAthlete(athlete);
		return true;
	}

	@Override
	public String toString() {
		if (maleCompetitionMap == null || maleCompetitionMap.isEmpty()) {
			return "Sorry, no competitions!";
		}
		StringBuffer buffer = new StringBuffer("Miting male competitions:\n");
		for (Competition competition : maleCompetitionMap.values()) {
			buffer.append(competition.toString());
			buffer.append('\n');
		}
		return buffer.toString();
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

}
