#include "Admin.hpp"
#include <iostream>
using namespace std;

Admin::Admin(string pName, string id, StateManager* pStateManager) : Account(pName, id) {
    stateManager = pStateManager;
    cout << "it's Admin account for "<< pName << "\n";
}

bool Admin::createAdminRequest(AdminRequest* adminRequest) {
    cout << "Admin request receieved" << "\n";
    //if(stateManager->addRequest())
    return true;
}