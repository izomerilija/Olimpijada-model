package sport.running;

import sport.AAthletics;
import sport.AthleticsDiscipline;

public abstract class ARunning extends AAthletics implements IDistance {

	protected static final long DISTANCE_60M = 60;
	protected static final long DISTANCE_100M = 100;
	protected static final long DISTANCE_200M = 200;
	protected static final long DISTANCE_400M = 400;
	protected static final long DISTANCE_800M = 800;
	protected static final long DISTANCE_1500M = 1500;
	protected static final long DISTANCE_3000M = 3000;
	protected static final long DISTANCE_5000M = 5000;
	protected static final long DISTANCE_10000M = 3000;
	protected static final long DISTANCE_42KM = 42000;

	protected long distance;

	public ARunning(AthleticsDiscipline sport, long distance) {
		super(sport);
		this.distance = distance;
	}

	@Override
	public long getDistance() {
		return this.distance;
	}

	@Override
	public String toString() {
		return this.discipline.toString();
	}
	
	@Override
	public int getMaxNumberOfParticipans() {
		return 9;
	}
}
