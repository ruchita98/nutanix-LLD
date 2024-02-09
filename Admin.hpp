#ifndef ADMIN_HPP
#define ADMIN_HPP

#include "Account.hpp"
#include "StateManager.hpp"
#include "AdminRequest.hpp"
using namespace std;

class Admin: public Account {
    private:
    StateManager* stateManager;
    public:
        Admin(string pName, string id, StateManager* pStateManager);
        bool createAdminRequest(AdminRequest* adminRequest);
};

#endif