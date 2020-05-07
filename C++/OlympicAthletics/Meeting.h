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
    DinString name;

public:
    //constructors
    Meeting();
    Meeting(DinString lOlympics);
    Meeting(const Meeting &olympics);

    //getters
    DinString getName() const;

    //setters
    void setName(DinString meetingName);

    //print
    friend ostream& operator<<(ostream& os, const Meeting& olympics);

};

#endif // MEETING_H_INCLUDED
