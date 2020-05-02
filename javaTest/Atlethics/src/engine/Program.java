package engine;

import java.util.Set;

import competition.Athlete;
import competition.Competition;
import competition.Miting;
import sport.running.RunningCompetition;
import sport.running.Sprint100m;
import sport.running.Sprint60m;
import sport.throwing.JavelinThrow;
import sport.throwing.ThrowingCompetition;

public class Program {

	public static void main(String[] args) {
		Sprint60m sprint60m = new Sprint60m();
		Sprint100m sprint100m = new Sprint100m();
		JavelinThrow javelinThrow = new JavelinThrow();

		Miting tokyoMiting = new Miting();

		Competition sprint60Competition = new RunningCompetition(sprint60m);
		Competition sprint100Competition = new RunningCompetition(sprint100m);
		Competition javelinCompetition = new ThrowingCompetition(javelinThrow);

		AthletesSelection selection = new AthletesSelection();
		selection.init();
		Set<Athlete> femaleAthletes = selection.getFemaleAthletes();
		Set<Athlete> maleAthletes = selection.getMaleAthletes();
		printAthletes(femaleAthletes);

		tokyoMiting.add(sprint60Competition);
		tokyoMiting.add(sprint100Competition);
		tokyoMiting.add(javelinCompetition);

		System.out.println(tokyoMiting.toString());

	}

	private static void printAthletes(Set<Athlete> athletes) {
		for (Athlete athlete : athletes) {
			System.out.println(athlete);
		}
	}

}
