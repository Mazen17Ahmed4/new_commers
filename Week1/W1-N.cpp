#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    char x ,a;

    cin >> x ;

    if (int (x) >=97 && int (x) <=122  )
    {

          a = int (x) -32 ;

        cout << a ;

    }
    else if ( int (x) >=65 && int (x) <=90  )
    {
        a = int (x) +32 ;
        cout << a ;

    }


    return 0 ;
}

