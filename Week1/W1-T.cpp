#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    long long a, b, c ;
    cin >>a >>b >>c ;
    if (a>=b && a>=c )
    {
        if (b>=c)
        cout  << c<<endl << b<< endl<< a  ;
        else if(c>=b)
        cout << b<<endl<<c<<endl <<a ;



    }

    else if (b>=a && b>=c )
    {
        if (a>=c)
        cout  << c<<endl << a<< endl<< b  ;
        else if(c>=a)
                cout << a<<endl<<c<<endl <<b ;

    }

     else if (c>=a && c>=b )
    {
        if (b>=a)
        cout  << a<<endl << b<< endl<< c  ;
        else if(a>=b)
                cout << b<<endl<<a<<endl <<c ;

    }


 cout << endl << endl <<a<<endl <<b<<endl<<c ;






    return 0 ;
}
