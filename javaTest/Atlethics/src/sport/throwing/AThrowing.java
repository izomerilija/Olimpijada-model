package sport.throwing;

import sport.AAthletics;
import sport.AthleticsSport;

public abstract class AThrowing extends AAthletics implements IThrowingEquipment {

	private Equipment equipment;

	public AThrowing(AthleticsSport throwing, Equipment equipment) {
		super(throwing);
		this.equipment = equipment;
	}

	public Equipment getEquipment() {
		return equipment;
	}

	@Override
	public String toString() {
		return sport.getBranch() + "(" + equipment + ")";
	}
}
