#ifndef USER_HPP
#define USER_HPP

#include "Account.hpp"
#include "StateManager.hpp"
#include <string>
using namespace std;

class User: public Account {
    private:
    StateManager* stateManager;
    string currentStateId;
    vector<State*> nextStates;

    public:
    User(string name, string id, StateManager* stMgr);
    void viewNextStates();
    bool moveToNextState(string nextStateId);
};

#endif