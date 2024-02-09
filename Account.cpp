#include "Account.hpp"
#include<iostream>
using namespace std;

Account::Account(string pName, string id){
    accountHolderName = pName;
    accountId = id;
    cout << "new account created \n";
};