#include <iostream>
using namespace std ;
int main ()
{
    int x ;
    cin >> x ;

    if (x>0)
    {
         for (int i=1;i<=x;i++)
    {

        if (x%i==0)
        cout << i<< endl;
        else
            continue ;
    }

    }



    return 0;
}
