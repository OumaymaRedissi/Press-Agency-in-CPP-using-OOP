#ifndef JOURNAINDEP_H
#define JOURNAINDEP_H

#include "journa.h"


class journaindep : public journa
{
    public:
        journaindep();
        virtual ~journaindep();
        journaindep(const journaindep& other);
        journaindep& operator=(const journaindep& other);

    protected:

    private:
};

#endif // JOURNAINDEP_H
