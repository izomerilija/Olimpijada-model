#ifndef MEETING_H_INCLUDED
#define MEETING_H_INCLUDED

#include <string>
#include <iostream>

#include "AthleticsDiscipline.h"
#include "AthleticsBranch.h"
#include "dinString.h"

using namespace std;

class Meeting{
protected:
    DinString meetingName;

public:
    Meeting(){

    }
    void printDisciplines() {
        cout << "Athletics disciplines on Tokyo meeting:" << "\n\n";  // staviti promenjivu umesto tokyo
        for (int i = 0; i < NUMBER_OF_A_DISCIPLINES; i++)
        {
            if (i == 0){
            cout << ">RUNNING:" << endl;              //trkačke discipline
            }
            if (i == NUMBER_OF_R_DISCIPLINES){        //odavde kreću skakačke discipline
            cout << "\n" << ">JUMPING:"<< endl;
            }
            if (i == NUMBER_OF_R_DISCIPLINES + NUMBER_OF_J_DISCIPLINES){  //odavde kreću bacačke discipline
            cout << "\n" << ">THROWING:"<< endl;
            }
            cout << "-" << athleticsDiscipline[i] << "\n";
        }
        cout << "\n" << "+ Heptathlon (7) and Decathlon (10)"<< endl;
    }

};


#endif // MEETING_H_INCLUDED
