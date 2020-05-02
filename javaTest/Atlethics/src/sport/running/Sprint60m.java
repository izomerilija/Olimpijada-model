package sport.running;

import sport.AthleticsSport;

public class Sprint60m extends ATrackAndField implements IDistance {

	public Sprint60m() {
		super(AthleticsSport.RUNNING_SPRINT_60, DISTANCE_60M);
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
