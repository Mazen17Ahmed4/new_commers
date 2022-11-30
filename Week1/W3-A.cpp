#include <iostream>

using namespace std ;
int main ()
{
  int n=1000 ;
    cin >> n;
    long long a[n],sum =0;

    for (int i =0 ;i<n;i++)
    {
        cin >> a[i] ;
        sum +=a[i] ;


    }
    if (sum >=0)
        cout <<sum ;
    else
        cout << sum*-1 ;



    return 0 ;
}
