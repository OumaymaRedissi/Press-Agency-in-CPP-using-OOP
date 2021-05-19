#ifndef JOURNAREC_H
#define JOURNAREC_H

#include "journa.h"
#include <string>

class journarec : public journa
{
    private:
        string date_rec;
        float salaire;
        string mission;
    public:
        journarec();
        journarec(int=0 ,string ="", string ="",string ="", string ="",string ="",float= 0,string ="");
        virtual ~journarec();
        journarec(const journarec& other);
        journarec& operator=(const journarec& other);

    protected:


};

#endif // JOURNAREC_H
