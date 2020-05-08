#include "Athlete.h"

using namespace std;

//constructors:
Athlete::Athlete() {              //s predefinisanim vrednostima
        gender = NOT_SPECIFIED;
        fullName = " ";
        discipline = NO_DISCIPLINE;
        double qualificationScore = 0.00;
}
Athlete::Athlete(Gender gender, string fullName, AthleticsDiscipline discipline, double qualificationScore) { //s parametrima
		this->gender = gender;
		this->fullName = fullName;
		this->discipline = discipline;
		this->qualificationScore = qualificationScore;
}
Athlete::Athlete (const Athlete &A){ //konstruktor kopije
        gender = A.gender;
        fullName = A.fullName;
        discipline = A.discipline;
        qualificationScore = A.qualificationScore;
}

//getteri
Gender Athlete::getGender() const {return gender;}
string Athlete::getFullName() const {return fullName;}
AthleticsDiscipline Athlete::getDiscipline() const {return discipline;}
double Athlete::getQualificationScore() const {return qualificationScore;}

//seteri
void Athlete::setGender (Gender sex) {gender = sex;}
void Athlete::setFullName (string name) {fullName = name;}
void Athlete::setDiscipline (AthleticsDiscipline sport) {discipline = sport;}
void Athlete::setQualificationScore(double score) {qualificationScore = score;}


//operator ispisa za atletičare
//inline
ostream& operator<<(ostream& osA, const Athlete& atl){
    osA << atl.getFullName() << ", compete " << athleticsDiscipline[atl.discipline] << " with qualification score: " << to_string(atl.qualificationScore);
    return osA;
}
