#include "journaindep.h"

/*journaindep::journaindep()
{
    //ctor
}*/
journaindep::journaindep(int id,string n, string p,string a, string c,string loc, string rep):journa(id,n, p, a,  c)
{
location=loc;
reputation=rep;
}

journaindep::~journaindep()
{
    //dtor
}

/*journaindep::journaindep(const journaindep& other)
{
    //copy ctor
}*/

journaindep& journaindep::operator=(const journaindep& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
