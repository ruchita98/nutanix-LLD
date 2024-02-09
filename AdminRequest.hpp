#ifndef ADMIN_REQUEST
#define ADMIN_REQUEST

#include<string>
#include "State.hpp"

class AdminRequest {
    private:
        string newState;
        string parentState;
        //string AdminId;
        bool toAdd;
        // time_t timestamp;
        // time_t TTL;
    public:
        AdminRequest(string pnew, string parent, bool pAdd);
};

#endif