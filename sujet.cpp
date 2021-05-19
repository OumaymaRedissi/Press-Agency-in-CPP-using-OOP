#include "sujet.h"

sujet::sujet()
{
    //ctor
}

sujet::~sujet()
{
    //dtor
}

sujet::sujet(const sujet& other)
{
    //copy ctor
}

sujet& sujet::operator=(const sujet& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
