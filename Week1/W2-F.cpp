#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int i,n  ;
    cin >> n ;
    if (n>=1 and n<=50)
    {
      for (i=1;i<=12 ;i++)
      {
      cout << n << " * " << i << " = "  << n*i <<endl ;
      }
    }



   return 0 ;
}


