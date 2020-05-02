package sport.running;

import sport.AthleticsSport;

public class Sprint100m extends ATrackAndField {

	public Sprint100m() {
		super(AthleticsSport.RUNNING_SPRINT_100, DISTANCE_100M);
	}

	@Override
	public int getMaxNumberAthletes() {
		return 9;
	}

	@Override
	public int getMaxNumberAthletesPerRace() {
		return 9;
	}

}
