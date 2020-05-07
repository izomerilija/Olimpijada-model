#include <iostream>
#include <time.h>

#include "AAthletics.h"
#include "Athlete.h"
#include "Meeting.h"

using namespace std;

int main()
{
    Meeting tokyoMeeting;
    tokyoMeeting.printDisciplines();

    srand(time(NULL));

    Athlete test(Gender::FEMALE, "Emilija Krstonosic", AthleticsDiscipline::JAVELIN_THROW, 1000.0);
    cout << test << endl;

    test.randomizeAll();
    cout << test << endl;

    return 0;
}

