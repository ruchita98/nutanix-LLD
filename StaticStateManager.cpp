#include<iostream>
#include "StaticStateManager.hpp"
#include "State.hpp"
#include <unordered_map>
#include <unordered_set>

using namespace std;

StaticStateManager::StaticStateManager ()
{
    stateMap = unordered_map<string, vector<State*> > ();
    allStates = unordered_set<string> ();
}

/*
bool addStaticState(State* state) {
    if(state -> parentState == nullptr)
    {
        StaticStateManager::allStates.insert(state);
    } else {
        if(StaticStateManager::allStates.find(state -> parentState) == StaticStateManager::allStates.end())
        {
            cout << "Invalid parent state" << endl;
            return false;
        } else 
        {
            StaticStateManager::allStates.insert(state);
            return true;
        }
    }
    return true;
}
*/
void StaticStateManager::populateStaticStates()
{
    State* state0 = new State("0", "0", "-1");
    allStates.insert(state0 -> stateId);
    
    State* state1 = new State("1", "1", "0");
     allStates.insert(state1 -> stateId);

    State* state2 = new State("2", "2", "0");
     allStates.insert(state2 -> stateId);

    vector<State*> states;
    states.push_back(state1);
    states.push_back(state2);
    string sid = state0 -> stateId;
    stateMap[sid] = states;

    // State* State11 = new State("11", "11", 1State);
    // State* State12 = new State("12", "12", 1State);
    // State* State13 = new State("13", "13", 1State);

    // State* 21State = new State("21", "21", 2State);
    // State* 22State = new State("22", "22", 2State);

    // State* 31State = new State("31", "31", 3State);
    // State* 32State = new State("32", "32", 3State);
    // State* 33State = new State("33", "33", 3State);

    // stateMap[0State -> stateId] = vector<State*> {1State, 2State, 3State};

    // stateMap[1State -> stateId] = vector<State*> {11State, 12State, 13State};

    // stateMap[2State -> stateId] = vector<State*> {21State, 22State};

    // stateMap[3State -> stateId] = vector<State*> {31State, 32State, 33State};
    
    // updateDB
}

vector<State*> StaticStateManager::getNextStaticStates(string currentStateId)
{
    if(stateMap.find(currentStateId) == stateMap.end())
    {
        // not found
        cout << "State not found"<< "\n";
        return vector<State*>();
    } else {
        return stateMap[currentStateId];
    }
}

bool StaticStateManager::stateExists(string stateId)
{
    if(allStates.find(stateId) == allStates.end())
    {
        return false;
    }
    return true;
}