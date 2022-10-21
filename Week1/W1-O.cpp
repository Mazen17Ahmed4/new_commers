#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int a , b ;
    char exp ;
    cin >> a >> exp >> b ;
    if (exp == '+')
        cout << a+b ;
    else if (exp =='-')
        cout << a- b ;
    else if (exp == '*')
        cout << a*b ;
    else if (exp == '/')
        cout <<a/b ;




    return 0 ;
}
