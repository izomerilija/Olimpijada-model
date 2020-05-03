package sport;

public enum AthleticsDiscipline {

	RUNNING_SPRINT_60(AthleticsBranch.RUNNING),
	RUNNING_SPRINT_100(AthleticsBranch.RUNNING),
	RUNNING_SPRINT_200(AthleticsBranch.RUNNING),
	RUNNING_SPRINT_400(AthleticsBranch.RUNNING),
	RUNNING_MIDDLE_800(AthleticsBranch.RUNNING),
	RUNNING_MIDDLE_1500(AthleticsBranch.RUNNING),
	RUNNING_MIDDLE_3000(AthleticsBranch.RUNNING),
	RUNNING_LONG_5000(AthleticsBranch.RUNNING),
	RUNNING_LONG_10000(AthleticsBranch.RUNNING),
	RUNNING_MARATHON(AthleticsBranch.RUNNING),
	
	LONG_JUMP(AthleticsBranch.JUMPING),
	HIGH_JUMP(AthleticsBranch.JUMPING),
	POLE_JUMP(AthleticsBranch.JUMPING),
	TRIPLE_JUMP(AthleticsBranch.JUMPING),
	
	
	JAVELIN_THROW(AthleticsBranch.THROWING),
	SHOTPUT_THROW(AthleticsBranch.THROWING),
	DISC_THROW(AthleticsBranch.THROWING),
	HAMMER_THROW(AthleticsBranch.THROWING)
	;
	

	private AthleticsBranch branch;

	private AthleticsDiscipline(AthleticsBranch branch) {
		this.branch = branch;
	}
	
	public AthleticsBranch getBranch() {
		return branch;
	}

}
