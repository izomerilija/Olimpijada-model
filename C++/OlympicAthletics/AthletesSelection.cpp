#include "AthletesSelection.h"


AthletesSelection::AthletesSelection() {
        initialized = false;
}
AthletesSelection::AthletesSelection(List<Athlete> males, List<Athlete> females, bool init) {
        maleAthletes = males;
        femaleAthletes = females;
        initialized = init;
}
AthletesSelection::AthletesSelection(const AthletesSelection &Athletes) {
        maleAthletes = Athletes.maleAthletes;
        femaleAthletes = Athletes.femaleAthletes;
        initialized = Athletes.initialized;
}
