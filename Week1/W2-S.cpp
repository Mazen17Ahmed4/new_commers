#include<iostream>
#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int t ;
    cin >> t;

    int x,y ;



    for (int i=1;i<=t ;i++)
    {
       cin >>x >> y ;
       long long sum=0;
       int minn = min (x,y) ;
       int maxx = max (x,y) ;
       for (int j= minn+1 ;j< maxx ;j++)
          {

             if (j%2 != 0)
            sum +=j ;
          }


        cout << sum << endl;


    }


    return 0;

}
