#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    long long x,m=0;
    int i ,n;
    cin >> n;

    for (i=1 ; i<=n ;i++ )
       {
         cin >> x ;
         if (m<x)
            m=x ;
         else
            continue ;

       }
cout << m ;
   return 0 ;
}

