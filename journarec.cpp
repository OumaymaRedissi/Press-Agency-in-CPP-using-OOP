#include"journarec.h"
/*journarec::journarec()
{
    //ctor
}*/

journarec::journarec(int id,string n, string p,string a, string c,string rec,float sal,string mis):journa(id,n, p, a,  c)
{
date_rec=rec;
salaire=sal;
mission=mis;
}

journarec::~journarec()
{
    //dtor
}

/*journarec::journarec(const journarec& other)
{
    //copy ctor
}
*/
journarec& journarec::operator=(const journarec& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
