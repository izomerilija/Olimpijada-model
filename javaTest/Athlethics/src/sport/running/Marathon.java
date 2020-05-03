package sport.running;

import sport.AthleticsDiscipline;

public class Marathon extends ARunning {

	public Marathon() {
		super(AthleticsDiscipline.RUNNING_MARATHON, DISTANCE_42KM);
	}

	@Override
	public int getMaxNumberOfParticipans() {
		return 30;
	}
}
