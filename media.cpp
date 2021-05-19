#include "media.h"

media::media()
{
    //ctor
}

media::~media()
{
    //dtor
}

media::media(const media& other)
{
    //copy ctor
}

media& media::operator=(const media& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
