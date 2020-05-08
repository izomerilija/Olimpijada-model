#ifndef MEETING_H_INCLUDED
#define MEETING_H_INCLUDED

#include <string>
#include <iostream>
#include <iterator>
#include <map>

#include "Competition.h"
#include "AthleticsDiscipline.h"
#include "AthleticsBranch.h"
#include "Gender.h"
#include "dinString.h"

using namespace std;

class Meeting{
protected:
    DinString name;
    map<AthleticsDiscipline, Competition> maleCompetitionMap;
	map<AthleticsDiscipline, Competition> femaleCompetitionMap;
public:

    //constructors
    Meeting();
    Meeting(DinString lOlympics);
    Meeting(const Meeting &olympics);

    //getters
    DinString getName() const;

    //setters
    void setName(DinString meetingName);

    void add(Competition competition){
        Gender competitionGender = competition.getGender();
        AthleticsDiscipline discipline = competition.getSport().getDiscipline();
        if(competitionGender == Gender::MALE){
            map<AthleticsDiscipline, Competition>::iterator it;
            it = maleCompetitionMap.find(discipline);
            if(it != maleCompetitionMap.end()){
                 maleCompetitionMap.insert(pair<AthleticsDiscipline, Competition>(discipline, competition));
            }
        } else{
            map<AthleticsDiscipline, Competition>::iterator it;
            it = femaleCompetitionMap.find(discipline);
            if(it != femaleCompetitionMap.end()){
                 femaleCompetitionMap.insert(pair<AthleticsDiscipline, Competition>(discipline, competition));
            }
        }
    }

    void registerAthlete(Athlete athlete) {
        AthleticsDiscipline discipline = athlete.getDiscipline();
        Gender gender = athlete.getGender();
        map<AthleticsDiscipline, Competition> competitionMap = gender == Gender::MALE ? maleCompetitionMap : femaleCompetitionMap;
        map<AthleticsDiscipline, Competition>::iterator it;
        it = competitionMap.find(discipline);
        if (it != competitionMap.end()){
           Competition competition = it -> second;
           if (competition.getSport().getDiscipline() == discipline) {
                competition.registerAthlete(athlete);
           }

        }
    }

    map<AthleticsDiscipline, Competition> getMaleCompetitionMap() const {
        return maleCompetitionMap;
    }
	map<AthleticsDiscipline, Competition> getFemaleCompetitionMap() const {
        return femaleCompetitionMap;
	};

    //print
    friend ostream& operator<<(ostream& os, const Meeting& olympics);

};

#endif // MEETING_H_INCLUDED
