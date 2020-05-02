package sport.running;

import competition.IMaxNumberOfParticipants;
import sport.AAthletics;
import sport.AthleticsSport;

public abstract class ATrackAndField extends AAthletics implements IDistance, IMaxNumberOfParticipants {

	protected static final long DISTANCE_60M = 60;
	protected static final long DISTANCE_100M = 100;
	protected static final long DISTANCE_200M = 200;
	protected static final long DISTANCE_400M = 400;
	protected static final long DISTANCE_800M = 800;
	protected static final long DISTANCE_1500M = 1500;
	protected static final long DISTANCE_3000M = 3000;
	protected static final long DISTANCE_10000M = 3000;
	protected static final long DISTANCE_42KM = 42000;
	
	protected long distance;
	
	public ATrackAndField(AthleticsSport sport, long distance) {
		super(sport);
		this.distance = distance;
	}

	@Override
	public long getDistance() {
		return this.distance;
	}
	
	@Override
	public String toString() {
		return this.sport.toString();
	}
}
