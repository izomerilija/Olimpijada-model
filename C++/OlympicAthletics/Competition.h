#ifndef COMPETITION_H_INCLUDED
#define COMPETITION_H_INCLUDED

#include "AAthletics.h"
#include "Athlete.h"
#include "Gender.h"
#include "list.h"

#include <iostream>

using namespace std;

class Competition {
protected:
    AAthletics sport;
	Gender gender;
	List<Athlete> athletes;

public:
    //
    Competition(Gender g, AAthletics discipline)  {
		gender = g;
		sport = discipline;
	}

	AAthletics getSport() const {
		return sport;
	}

	Gender getGender() const {
		return gender;
	}

	List<Athlete> getAthletes() const {
        return athletes;
	}

	bool registerAthlete(Athlete athlete) {

	/*	//provere:
        if (athletes == null)
			athletes = new List<Athlete>;

		if (gender != athlete.getGender()) {
			cout << "The gender is not as required!" << endl;
			return false;
		}
		if (sport.getDiscipline() != athlete.getDiscipline()) {
			cout << "The discipline is not as required!" << endl;
			return false;
		}
    */
        bool registered = false;
		int length = athletes.get_brEl();
		for (int i=0; i<length; i++) {
            Athlete registeredAthlete;
            athletes.read(i, registeredAthlete);
			if (athlete.getQualificationScore() > registeredAthlete.getQualificationScore()) {
				athletes.add(i, athlete);
				registered = true;
				break;
			}
			// athletesPosition:  ++;
		}
		// if athlete has the worst score
		if (!registered) {
			athletes.add(athletes.get_brEl(), athlete);
		}
		return true;
	}


	List<Athlete> getParticipants() {
        List<Athlete> participants;
        int length = sport.getMaxNumberOfParticipants();
        if (athletes.get_brEl() < length) {
            length = athletes.get_brEl();
        }
        for (int i=0; i<length; i++) {
            Athlete athlete;
            athletes.read(i, athlete);
            participants.add(i, athlete);
        }
		return participants;
	}

    friend ostream& operator<<(ostream& osC, const Competition& compe);

};

inline ostream& operator<<(ostream& osC, const Competition& compe) {
    osC << "Competition: " << compe.getSport().getDiscipline() << endl;
    osC << "Participants: " << endl;

    for (int i = 0; i < compe.getAthletes().get_brEl(); i++) {
			Athlete athlete;
			compe.athletes.read(i, athlete);
			if (i == compe.getSport().getMaxNumberOfParticipants()) {
				osC << "  --------";
			}
			if (i < compe.getSport().getMaxNumberOfParticipants()) {
				osC << "  [+] " << to_string(i+1) << ": ";
			} else {
				osC << "  [-]: ";
			}
            osC << "  " << athlete.getFullName() << endl;
    }
    return osC;
 }


#endif // COMPETITION_H_INCLUDED



