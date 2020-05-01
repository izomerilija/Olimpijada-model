package engine;

import competition.Competition;
import competition.Gender;
import competition.Miting;
import competition.Race;
import competition.RunningCompetition;
import competition.ThrowingCompetition;
import sport.running.Sprint100m;
import sport.running.Sprint60m;
import sport.throwing.JavelinThrow;

public class Program {

	public static void main(String[] args) {
		Sprint60m sprint60m = new Sprint60m();
		Sprint100m sprint100m = new Sprint100m();
		JavelinThrow javelinThrow = new JavelinThrow();

		Miting tokyoMiting = new Miting();

		Competition sprint60Competition = new RunningCompetition(sprint60m);
		Competition sprint100Competition = new RunningCompetition(sprint100m);
		Competition javelinCompetition = new ThrowingCompetition(javelinThrow);
		Competition nullCompetition = new ThrowingCompetition(null);

		tokyoMiting.add(sprint60Competition);
		tokyoMiting.add(sprint100Competition);
		tokyoMiting.add(javelinCompetition);
		tokyoMiting.add(nullCompetition);

		
		System.out.println(tokyoMiting.toString());

	}
	
	private static Race createRace(Gender gender, int numberOfAthletes) {
		Race race = new Race(gender);
		return race;
	}
}
