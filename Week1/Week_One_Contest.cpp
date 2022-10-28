
/////////////////////////////////Contest1/////////////////////////////////
/////////////////////////////////////////////////////////////////////////

// A.it's easy :

#include <iostream>
using namespace std;

int main()
{
long long n ;
cin >> n ;
// the smallest positive one --> 1
if( n == 1 || n%2 == 0)
    cout << "YES" ;
    else
    cout << "NO" ;
    return 0;
}

/////////////////////////////////////////////////////////////////////////

// B.some operations :

#include <iostream>
using namespace std;

int main()
{
long long x , y ;
cin >> x >> y ;
cout << x+y << endl << x/y ;
return 0;
}

/////////////////////////////////////////////////////////////////////////

//C.start with which letter ? :

#include <iostream>
using namespace std;

int main()
{
char x ;
cin >> x ;
//" ICPC ASSIUT " --> { I,C,P,A,S,U,T }

if(x=='I' || x=='C' || x=='P' || x=='A' || x=='S' || x=='U' || x=='T')
    cout << "Starts with letter " << x << " in phrase ICPC ASSIUT" ;
else
cout << "Not starts with any letter in phrase ICPC ASSIUT" ;
return 0;
}


/////////////////////////////////////////////////////////////////////////

//D.next alphabet :

#include <iostream>
using namespace std;

int main()
{
char x ;
cin >> x ;
if(x == 'z')
cout << "a" ;
else
cout << char(x+1) ;     // a = 97   ,  b = 98
//cout << x+1 ;
// cout << ++x ;
// cout << x++ << endl << x ;
return 0;
}

/////////////////////////////////////////////////////////////////////////

//E.freelancer work :

#include <iostream>
using namespace std;

int main()
{
int n,p;
cin >> n >> p ;
// total = projects number * price --> n*p
int answer ;
answer = (n*p*80)/100 ;
//answer = n*p*(80/100.0) ;
cout << answer ;
return 0;
}

/////////////////////////////////////////////////////////////////////////


//F.Geometry :

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int a , b ;
cin  >> b >> a ;
double r , pi=3.14159265359 ;
 r = 0.5*a ;
 //triangle area = a * a  ----> 0.5*2*a*a
 // red area = triangle area - circle area
double red_area = (0.5*a*b) - (pi*r*r) ;
cout << fixed << setprecision(6);
cout << red_area ;
return 0;
}

/////////////////////////////////////////////////////////////////////////

//G.be careful :

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n ;
cin >> n ;
cout << ceil(n/2.0) ;
//cout << (n+1)/2 ;
//cout << (n/2)+(n%2) ;
return 0;
}

/////////////////////////////////////////////////////////////////////////

//H.multiply :

#include <iostream>
using namespace std;

int main()
{

long long a,b;
cin >> a >> b ;
if(a%2==0 || b%2==0)
    cout << "Even" ;
else
    cout << "Odd" ;
return 0;
}

/////////////////////////////////////////////////////////////////////////
