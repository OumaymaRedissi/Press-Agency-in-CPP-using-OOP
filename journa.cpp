#include "journa.h"

journa::journa(int id,string n, string p, int an, string c)
{
id_j=id;
prenom=p;
nom=n;
anneeNaissance=an;
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
out<<"Identifiant : "<<j.id_j<<endl<<"Prenom : "<<j.prenom<<endl<<"Nom : "<<j.nom<<endl<<"Année de naissance: "<<j.anneeNaissance<<endl;
return out;
}
