#include "AdminRequest.hpp"

AdminRequest::AdminRequest(string pnew, string parent, bool pAdd)
{
    newState = pnew;
    parentState = parent;
    toAdd = pAdd;
}