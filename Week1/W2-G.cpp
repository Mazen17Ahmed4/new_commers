#include <bits/stdc++.h>
using namespace std ;
int main ()
{

   int t , n;
   long long mul=1;
   cin >> t ;


   for (int i =1 ; i<=t;i++)
   {
       cin >> n;

       for ( int i=1;i<=n;i++)
       {
           mul *=i;

       }
       cout << mul <<endl ;

        mul =1;


   }




   return 0 ;
}


