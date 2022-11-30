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
         {
             check =1 ;

          }
        else
        cout << i ;

         }


    return 0 ;
}
