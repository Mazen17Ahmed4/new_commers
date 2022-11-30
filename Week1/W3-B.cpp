#include <iostream>
using namespace std ;
int main ()
{
    bool b=0;
    long long  n=100 ;
    long long  x,c;
    cin >> n ;
    long long a[n];

    for (int i =0;i<n;i++)
    {cin >> a[i] ;
    }

     cin >> x ;
    for (int i=0 ;i<n;i++)
    {
        if (a[i]==x)
        {
            b=1 ;
           cout << i ;
           break ;
        }

    }


 if (b==0)
    cout <<-1 ;

    return 0;
}
