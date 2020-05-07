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

//generisanje random imana ljudi:
void Athlete::randomizeName() {
    //kreiranje muskog imena sa nekim prezimenom
    if (gender == Gender::MALE)
        this->fullName = randomAthlete.randomString(1) + " " + randomAthlete.randomString(3);
    //kreiranje zenskog imena sa nekim prezimenom
    if (gender == Gender::FEMALE)
        this->fullName = randomAthlete.randomString(2) + " " + randomAthlete.randomString(3);
}
//generisanje random atleticara:
void Athlete::randomizeAll() {      //ime, kvalifikacioni rezultat i izabrana disciplina{
    Athlete::randomizeName();
    this->qualificationScore = randomAthlete.getQualificationScore(); //Simulation helper, generiše kvalifikacije
    this->discipline = randomAthlete.getRandomSport(); //simulation helper, dodeljuje sport/takmičarsku disciplinu
}

//operator ispisa za atletičare
//inline
ostream& operator<<(ostream& os, const Athlete& atl){
    os << atl.getFullName() << ", compete " << athleticsDiscipline[atl.discipline] << " with qualification score: " << to_string(atl.qualificationScore);
    return os;
}
