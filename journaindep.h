#ifndef JOURNAINDEP_H
#define JOURNAINDEP_H

#include "journa.h"
#include <string>

class journaindep : public journa
{
    private:
        string location;
        string reputation;

    public:
        journaindep();
        journaindep(int=0 ,string ="", string ="",string ="", string ="",string ="",string ="");
        virtual ~journaindep();
        journaindep(const journaindep& other);
        journaindep& operator=(const journaindep& other);
};

#endif // JOURNAINDEP_H
