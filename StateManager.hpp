#ifndef STATE_MANAGER
#define STATE_MANAGER

// Singleton
#include "State.hpp"

#include<mutex>
#include <string>
#include<unordered_map>
#include "AdminRequest.hpp"
#include "StaticStateManager.hpp"

class StateManager {
    private:
    StateManager();
    static StaticStateManager* staticStateManager;
    static StateManager* stateManagerInstance;
    static mutex mtx;

    public:
    static StateManager* getInstance();
    //bool processAdminRequest(AdminRequest* adminRequest);
    static unordered_map<string, vector<State*> > toRemove; // stateId, vector<StatesToRemove>
    static unordered_map<string, vector<State*> > toAdd;
    vector<State*> viewNextStates(string currentStateId);
    bool addRequest(string nextState, string parentState);
};

#endif