package engine;

import java.util.Set;

import competition.Athlete;
import competition.Gender;
import competition.Meeting;
import sport.jumping.HighJump;
import sport.jumping.JumpingCompetition;
import sport.jumping.LongJump;
import sport.jumping.PoleJump;
import sport.running.Long10000m;
import sport.running.Long5000m;
import sport.running.Marathon;
import sport.running.Middle1500m;
import sport.running.Middle3000m;
import sport.running.Middle800m;
import sport.running.RunningCompetition;
import sport.running.Sprint100m;
import sport.running.Sprint200m;
import sport.running.Sprint400m;
import sport.running.Sprint60m;
import sport.throwing.DiscThrow;
import sport.throwing.JavelinThrow;
import sport.throwing.ThrowingCompetition;

public class Program {

	public static void main(String[] args) {

		Meeting tokyoMiting = new Meeting();
		tokyoMiting.setName("Tokio meeting");
		tokyoMiting.add(new RunningCompetition(Gender.MALE, new Sprint60m()));
		tokyoMiting.add(new RunningCompetition(Gender.MALE, new Sprint100m()));
		tokyoMiting.add(new RunningCompetition(Gender.MALE, new Sprint200m()));
		tokyoMiting.add(new RunningCompetition(Gender.MALE, new Sprint400m()));
		tokyoMiting.add(new RunningCompetition(Gender.MALE, new Middle800m()));
		tokyoMiting.add(new RunningCompetition(Gender.MALE, new Middle1500m()));
		tokyoMiting.add(new RunningCompetition(Gender.MALE, new Middle3000m()));
		tokyoMiting.add(new RunningCompetition(Gender.MALE, new Long5000m()));
		tokyoMiting.add(new RunningCompetition(Gender.MALE, new Long10000m()));
		tokyoMiting.add(new RunningCompetition(Gender.MALE, new Marathon()));
		tokyoMiting.add(new JumpingCompetition(Gender.MALE, new HighJump()));
		tokyoMiting.add(new JumpingCompetition(Gender.MALE, new LongJump()));
		tokyoMiting.add(new JumpingCompetition(Gender.MALE, new PoleJump()));
		tokyoMiting.add(new ThrowingCompetition(Gender.MALE, new DiscThrow()));
		tokyoMiting.add(new ThrowingCompetition(Gender.MALE, new JavelinThrow()));

		tokyoMiting.add(new RunningCompetition(Gender.FEMALE, new Sprint60m()));
		tokyoMiting.add(new RunningCompetition(Gender.FEMALE, new Sprint100m()));
		tokyoMiting.add(new RunningCompetition(Gender.FEMALE, new Sprint200m()));
		tokyoMiting.add(new RunningCompetition(Gender.FEMALE, new Sprint400m()));
		tokyoMiting.add(new RunningCompetition(Gender.FEMALE, new Middle800m()));
		tokyoMiting.add(new RunningCompetition(Gender.FEMALE, new Middle1500m()));
		tokyoMiting.add(new RunningCompetition(Gender.FEMALE, new Middle3000m()));
		tokyoMiting.add(new RunningCompetition(Gender.FEMALE, new Long5000m()));
		tokyoMiting.add(new RunningCompetition(Gender.FEMALE, new Long10000m()));
		tokyoMiting.add(new RunningCompetition(Gender.FEMALE, new Marathon()));
		tokyoMiting.add(new JumpingCompetition(Gender.FEMALE, new HighJump()));
		tokyoMiting.add(new JumpingCompetition(Gender.FEMALE, new LongJump()));
		tokyoMiting.add(new JumpingCompetition(Gender.FEMALE, new PoleJump()));
		tokyoMiting.add(new ThrowingCompetition(Gender.FEMALE, new DiscThrow()));
		tokyoMiting.add(new ThrowingCompetition(Gender.FEMALE, new JavelinThrow()));
		
		AthletesSelection selection = new AthletesSelection();
		selection.init();
		Set<Athlete> femaleAthletes = selection.getFemaleAthletes();
		Set<Athlete> maleAthletes = selection.getMaleAthletes();

		for (Athlete athlete : maleAthletes) {
			tokyoMiting.register(athlete);
		}
		for (Athlete athlete : femaleAthletes) {
			tokyoMiting.register(athlete);
		}
		System.out.println(tokyoMiting.toString());

	}

}
