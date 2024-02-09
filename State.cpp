#include "State.hpp"

State::State(string pStateId, string pStateName, string pParentStateId)
{
    stateId = pStateId;
    stateName = pStateName;
    parentStateId = pParentStateId;
};
