#include <string>

#include "Athlete.h"

using namespace std;

class Athlete {
private:
	Gender gender;
	string fullName;
	AthleticsDiscipline discipline;
	double qualificationScore;

public:
    Athlete() {
        gender = NOT_SPECIFIED;
        fullName = " ";
        discipline = NO_DISCIPLINE;
        double qualificationScore = 0,00;
    }
    Athlete(Gender gender, string fullName, AthleticsDiscipline, double qualificationScore) {
		this->gender = gender;
		this->fullName = fullName;
		this->discipline = discipline;
		this->qualificationScore = qualificationScore;
	}

	Gender getGender() {
		return gender;
	}

	string getFullName() {
		return fullName;
	}

	void setDiscipline (AthleticsDiscipline sport) {
		discipline = sport;
	}

	AthleticsDiscipline getDiscipline() {
		return discipline;
	}

    double getQualificationScore() {
		return qualificationScore;
	}

	void setQualificationScore(double score) {
		this->qualificationScore = score;
	}

	void print(string fullName, AthleticsDiscipline discipline, double qualificationScore)


	@Override
	public String toString() {
		return new StringBuilder().append(fullName).append(", compete ").append(sport).append(" with qualification score: ").append(qualificationScore)
				.toString();
	}
};
