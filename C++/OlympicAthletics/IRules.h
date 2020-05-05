#ifndef IRULES_H_INCLUDED
#define IRULES_H_INCLUDED

/*__interface IRules {

  int getMaxNumberOfParticipans();
  //StartPositions getStartPosition();
}
*/

class IRules {
public:
  virtual int getMaxNumberOfParticipans() = 0;
  //virtual StartPositions getStartPosition() = 0;
  ~IRules();
};

#endif // IRULES_H_INCLUDED
