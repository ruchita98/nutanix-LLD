#include "User.hpp"
#include "Account.hpp"
#include<iostream>
using namespace std;

User::User(string pName, string id, StateManager* stManager) : Account(pName, id) {
    stateManager = stManager;
    currentStateId = "0";
    nextStates = vector<State*> ();
    cout << "it's user account for "<< pName << "\n";
}

void User::viewNextStates() {
    nextStates = stateManager -> viewNextStates(currentStateId);
    if(nextStates.size() == 0)
    {
        cout << "No next state found creating support ticket" << endl;
        return;
    }

    cout << "choose between these states----- \n";
    for(int i = 0; i < nextStates.size(); i++)
    {
        cout << nextStates[i] -> stateName << endl;
    }
}

/*
bool moveToNextState(string nextStateId)
{
    nextStates = stateManager -> viewNextStates(currentStateId);
    if(nextStates.size() == 0)
    {
        return false;
    }

    for(int i = 0; i < nextStates.size(); i++)
    {
        if(nextStates[i] -> stateId == nextStateId)
        {
            cout << "Congrats you've moved to next state " << stateId << endl;
            currentStateId = nextStateId;
            return true;
        }
    }

    cout << "invalid state" << endl;
    return false;
}
*/