#ifndef INITSTATE_H_
#define INITSTATE_H_

#include "IState.h"
#include "../StateMachine.h"
#include "../../Singleton.h"

class Initializing : public Singleton<Initializing, IState> {
  public:
    int GetName(){
      return Mode::initialization;
    }
    void Run(StateMachine *_stateMachine, const float);
};
#endif
