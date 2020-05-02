package sport.jumping;

import sport.AAthletics;
import sport.AthleticsSport;

public abstract class AJumping extends AAthletics {

	public AJumping(AthleticsSport jumping) {
		super(jumping);
	}

	@Override
	public String toString() {
		return sport.toString();
	}
}
