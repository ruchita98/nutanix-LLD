#include<iostream>
#include "StateManager.hpp"
#include "State.hpp"
#include "StaticStateManager.hpp"

using namespace std;

StateManager* StateManager::stateManagerInstance = nullptr;
StaticStateManager* StateManager::staticStateManager = new StaticStateManager();
unordered_map<string, vector<State*> > StateManager::toAdd = unordered_map<string, vector<State*> > ();
unordered_map<string, vector<State*> > StateManager::toRemove = unordered_map<string, vector<State*> > ();
mutex StateManager::mtx;

StateManager::StateManager()
{

}

StateManager* StateManager::getInstance()
{
    if(stateManagerInstance == nullptr)
    {
        mtx.lock();
        if(stateManagerInstance == nullptr)
        {
            stateManagerInstance = new StateManager();
            staticStateManager -> populateStaticStates();
        }
        mtx.unlock();
    }
    return stateManagerInstance;
}

vector<State*> StateManager::viewNextStates(string currentStateId)
{
    vector<State*> nextStaticStates = staticStateManager -> getNextStaticStates(currentStateId);

    if(nextStaticStates.size() == 0)
    {
        return nextStaticStates;
    }

    return nextStaticStates;
    

}

bool StateManager::addRequest(string nextState, string parentState) {
    if(staticStateManager -> stateExists(parentState))
    {
        State* newState = new State(nextState, nextState, parentState);
        toAdd[parentState].push_back(newState);
        return true;
    }
    cout << "invalid opr" << endl;
    return false;
}