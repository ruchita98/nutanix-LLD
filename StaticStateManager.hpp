#ifndef STATIC_STATE_MANAGER
#define STATIC_STATE_MANAGER


#include "State.hpp"

#include<unordered_map>
#include<unordered_set>
#include<vector>

class StaticStateManager {
    private:


    public:
    StaticStateManager();
    unordered_map<string, vector<State*> > stateMap; // cache - StateId, allNextState
    unordered_set<string> allStates;
    void addStaticState(State* state);
    void clearAllStaticStates();
    void populateStaticStates();
    vector<State*> getNextStaticStates(string currentStateId);
    bool stateExists(string stateId);
};

#endif