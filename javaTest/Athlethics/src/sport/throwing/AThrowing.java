package sport.throwing;

import sport.AAthletics;
import sport.AthleticsDiscipline;

public abstract class AThrowing extends AAthletics implements IThrowingEquipment {

	private Equipment equipment;

	public AThrowing(AthleticsDiscipline throwing, Equipment equipment) {
		super(throwing);
		this.equipment = equipment;
	}

	public Equipment getEquipment() {
		return equipment;
	}

	@Override
	public int getMaxNumberOfParticipans() {
		return 10;
	}
	
	@Override
	public String toString() {
		return discipline.getBranch() + "(" + equipment + ")";
	}
}
