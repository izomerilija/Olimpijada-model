package sport.throwing;

import sport.AAthletics;
import sport.AtleticsBranch;

public class AThrowing extends AAthletics {

	private Equipment equipment;

	public AThrowing(Equipment equipment) {
		super(AtleticsBranch.THROWING);
		this.equipment = equipment;
	}

	public Equipment getEquipment() {
		return equipment;
	}

	@Override
	public String toString() {
		return "THROWING(" + equipment + ")";
	}
}
