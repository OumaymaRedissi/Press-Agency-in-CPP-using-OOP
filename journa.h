#ifndef JOURNA_H
#define JOURNA_H

#include<iostream>
#include<string>
using namespace std;


class journa
{
    protected:
        int id_j;
        string prenom;
        string nom;
        int anneeNaissance;
        string diplome;
    public:
        journa(int=0 ,string ="", string ="", int =0,string ="");
        virtual ~journa();
        journa(const journa& other);
        journa& operator=(const journa& other);
        friend ostream& operator<< (ostream&, journa &);
};

#endif // JOURNA_H
