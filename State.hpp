#ifndef STATE_HPP
#define STATE_HPP

#include<string>
using namespace std;

class State {
    public:
        string stateId;
        string stateName;
        string parentStateId;

        State(string pStateId, string pStateName, string pParentStateId);
};

#endif