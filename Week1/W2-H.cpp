#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    bool check = 0;
    long long n ;
    cin >> n ;


     for (int i =2 ;i<n ; i++)
         {
         if (n%i==0)
         check =1 ;
         }

    if (check ==0)
        cout << "YES" ;
    else if (check ==1)
    cout << "NO" ;
    return 0 ;
}
