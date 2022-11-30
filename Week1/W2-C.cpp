#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int i, ev=0 , odd=0 , pos=0 , neg=0 ;
    long long n,x ;
    cin >>n ;

    for (i=1 ; i<=n ;i++)
     { cin >> x ;
       if (x%2==0 )
        ev++ ;
        else
        odd++ ;
       if (x>0)
        pos++ ;
       else if (x<0)
        neg ++ ;


     }

    cout << "Even: " << ev <<endl ;
    cout << "Odd: " << odd <<endl;
    cout << "Positive: " << pos<<endl  ;
    cout << "Negative: " << neg <<endl;
    return 0 ;
}
