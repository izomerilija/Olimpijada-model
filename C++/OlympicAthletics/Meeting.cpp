#include "Meeting.h"

using namespace std;

//constructors
Meeting::Meeting(){
    name = "";
}
Meeting::Meeting(DinString lOlympics){
    name = lOlympics;
}
Meeting::Meeting(const Meeting &olympics){
    name = olympics.name;
}

//getters
DinString Meeting::getName() const {return name;}

//setters
void Meeting::setName(DinString meetingName){name = meetingName;}


//operator overload
ostream& operator<<(ostream& osM, const Meeting& olympics){
    osM << "Athletics disciplines on " << olympics.getName() << " meeting:" << "\n\n";

    for (int i = 1; i < NUMBER_OF_A_DISCIPLINES + 1; i++){
        if (i == 1)
        osM << ">RUNNING:" << endl;        //trkačke discipline
        if (i == NUMBER_OF_R_DISCIPLINES + 1)  //odavde kreću skakačke discipline
        osM << "\n" << ">JUMPING:"<< endl;
        if (i == NUMBER_OF_R_DISCIPLINES + NUMBER_OF_J_DISCIPLINES + 1) //odavde kreću bacačke discipline
        osM << "\n" << ">THROWING:"<< endl;
        osM << "-" << athleticsDiscipline[i] << "\n";
    }
    osM << "\n" << "+ Heptathlon (7) and Decathlon (10)"<< endl;
    osM << "\n" << "-----------------------------------"<< "\n\n";

    map<AthleticsDiscipline, Competition>::iterator it = olympics.getMaleCompetitionMap().begin();

    while (it != olympics.maleCompetitionMap.end()) {
        Competition c = it -> second;
        osM << c << endl;
    }

    return osM;
}
