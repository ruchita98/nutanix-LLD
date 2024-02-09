#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>
#include "State.hpp"
#include<vector>
using namespace std;

class Account {
    protected:
        string accountHolderName;
        string accountId;
    public:
        Account(string pName, string id);
};

#endif