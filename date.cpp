#include "date.h"



date::date( int j, int m, int a )
{
   setdate( j, m, a );
}


void date::setdate( int j, int m, int a)
{
   if ( m >= 1 && m <= 12 )
       mm = m;
   else
       throw invalid_argument( "Mois doit etre entre 1 et 12" );

   if ( a >= 1900 && a <= 2100 )
       aaaa = a;
   else
       throw invalid_argument( "Année doit etre entre 1900 et 2100" );

   if ( ( m == 2 && anneeBi( a) && j >= 1 && j <= 29 ) ||
         ( j >= 1 && j <= jours[m ] ) )
       jj = j;
   else
       throw invalid_argument(
          "Jour invalide" );
}



bool date::anneeBi( int ann )
{
   if ( ann % 400 == 0 ||
       ( ann % 100 != 0 && ann % 4 == 0 ) )
       return true;
   else
       return false;
}

bool date::finMoi( int jr ) const
{
   if ( mm == 2 && anneeBi( aaaa) )
       return jr == 29;
   else
       return jr == jours[mm];
}

ostream &operator<<( ostream &out, const date &d )
{
   static string Mois[ 13 ] = { "", "Janvier"," février",
        "Mars", "Avril", "Mai", "Juin", "Juillet", "Août",
        "Septembre"," Octobre"," Novembre"," Décembre" };
   out<<d.jj<<" "<< Mois[d.mm ] <<" "<< d.aaaa;
   return out;

}

