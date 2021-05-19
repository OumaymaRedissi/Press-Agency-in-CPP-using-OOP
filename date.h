#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<string>
using namespace std;
const int jours[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

class date
{
    private:
        int jj;
        int mm;
        int aaaa;

    public:
        date( int jj = 1, int mm = 1, int aaaa = 1900 );
        void setdate( int, int, int );
        static bool anneeBi( int ); // is date in a leap year?
        bool finMoi( int ) const; // is date at the end of month?
        friend ostream &operator<<( ostream &out, const date &d );
        friend istream &operator>>( ostream &in, const date &d );




};

#endif // date_H
