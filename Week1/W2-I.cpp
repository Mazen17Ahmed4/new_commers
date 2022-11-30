#include <iostream>
using namespace std ;
int main ()
{
    string  n ;
    int l =n.length () ;

    cin >> n ;
    for (int i=0 ; i<=l;i++)
    {
        for (int j =l-1 ;j>=0;j--)
        {
            if (n[i]==n[j])
                cout << n[i] ;

        }
       cout << "YES" ;



    }


    return 0;
}
