#ifndef JOURNA_H
#define JOURNA_H

#include<iostream>
#include<string>
#include"date.h"
using namespace std;


class journa
{
    protected:
        int id_j;
        string prenom;
        string nom;
        date date_n;
        string diplome;
    public:
        journa();
        journa(int=0 ,string ="", string ="", date,string ="");
        virtual ~journa();
        journa(const journa& other);
        journa& operator=(const journa& other);
        friend ostream& operator<< (ostream&, journa &);
};

#endif // JOURNA_H
