#include<iostream>
#include "User.hpp"
#include "Admin.hpp"
#include "StateManager.hpp"
using namespace std;

int main()
{
    cout << "Welcome to help section of Zomato..."<< endl;


    StateManager* stateManager = StateManager::getInstance();

    User* user = new User("Ruchita", "ruchita.das01", stateManager);

    user -> viewNextStates();

    Admin* admin = new Admin("Shiv", "ShivNutanix", stateManager);

    AdminRequest* request = new AdminRequest("2" , "0", true);
    admin -> createAdminRequest(request);
    // modify the states


    //user -> viewNextStates();
}