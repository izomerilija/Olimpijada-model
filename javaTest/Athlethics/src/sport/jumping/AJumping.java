package sport.jumping;

import sport.AAthletics;
import sport.AthleticsDiscipline;

public abstract class AJumping extends AAthletics {

	public AJumping(AthleticsDiscipline jumping) {
		super(jumping);
	}

	@Override
	public String toString() {
		return discipline.toString();
	}
	
	@Override
	public int getMaxNumberOfParticipans() {
		return 12;
	}
}
