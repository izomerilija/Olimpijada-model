package sport.running;

import sport.AAthletics;
import sport.AtleticsBranch;

public class ATrackAndField extends AAthletics {

	private static final int MAX_SPRINT_DISTANCE = 400;
	private static final int MAX_MIDDLE_DISTANCE = 3000;

	protected static final long DISTANCE_60M = 60;
	protected static final long DISTANCE_100M = 100;
	
	private TrackLength trackLengthType;
	private long trackLength;

	public ATrackAndField(long distance) {
		super(AtleticsBranch.RUNNING);
		this.trackLength = distance;
		this.setTrackLengthType(distance);
	}

	private void setTrackLengthType(long distance) {
		if (distance <= MAX_SPRINT_DISTANCE) {
			this.trackLengthType = TrackLength.SPRINT;

		} else if (distance <= MAX_MIDDLE_DISTANCE) {
			this.trackLengthType = TrackLength.MIDDLE;

		} else {
			this.trackLengthType = TrackLength.LONG;
		}
	}

	public long getTrackLength() {
		return trackLength;
	}

	public TrackLength getTrackLengthType() {
		return trackLengthType;
	}

	@Override
	public String toString() {
		return this.branch.toString() + "(" + trackLength + ")";
	}
}
