#include "journa.h"

journa::journa(int id,string n, string p, date a, string c)
{
id_j=id;
prenom=p;
nom=n;
date_n=a;
diplome=c;
}

journa::~journa()
{
    //dtor
}

journa::journa(const journa& other)
{
    //copy ctor
}

journa& journa::operator=(const journa& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

ostream& operator<< (ostream& out, journa& j)
{
out<<"Identifiant : "<<j.id_j<<endl<<"Prenom : "<<j.prenom<<endl<<"Nom : "<<j.nom<<endl<<"Année de naissance: "<<j.date_n<<endl;
return out;
}
