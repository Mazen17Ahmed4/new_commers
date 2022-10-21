#include <iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
/*
    int a,b,c ;
    cin >> a>>b>>c ;


    if (a<b &&a<c )
        cout << a;
       else if (b<a && b<c)
        cout << b ;
        else
        cout <<c ;
     cout << " " ;

    if (a>b && a>c)
        cout << a ;
    else if (b>a && b>c)
        cout << b ;
        else
            cout << c ;


*/
        int a,b,c ;
        cin >> a>>b>>c ;
       cout << min (a,min(b,c)) ;
       cout << " "<< max (a,max(b,c)) ;



    return 0 ;
}
