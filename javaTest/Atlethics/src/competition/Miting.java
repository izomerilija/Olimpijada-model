package competition;

import java.util.ArrayList;
import java.util.List;

public class Miting {

	private List<Competition> competitions;

	public boolean add(Competition competition) {
		if (competitions == null) {
			competitions = new ArrayList<Competition>();
		}
		competitions.add(competition);
		return true;
	}
	
	@Override
	public String toString() {
		if (competitions == null || competitions.size() == 0) {
			return "Sorry, no competitions!";
		}
		StringBuffer buffer = new StringBuffer("Miting competitions:\n");
		for (Competition competition : competitions) {
			buffer.append(competition.toString());
			buffer.append('\n');
		}
		return buffer.toString();
	}
	
}
