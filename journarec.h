#ifndef JOURNAREC_H
#define JOURNAREC_H

#include "journa.h"


class journarec : public journa
{
    public:
        journarec();
        virtual ~journarec();
        journarec(const journarec& other);
        journarec& operator=(const journarec& other);

    protected:

    private:
};

#endif // JOURNAREC_H
