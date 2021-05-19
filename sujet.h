#ifndef SUJET_H
#define SUJET_H


class sujet
{
    public:
        sujet();
        virtual ~sujet();
        sujet(const sujet& other);
        sujet& operator=(const sujet& other);

    protected:

    private:
};

#endif // SUJET_H
