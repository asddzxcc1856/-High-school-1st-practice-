#include <iostream>
using namespace std;

int gcd(int m,int n);

int main ()
{
   int a,b;
   while (cin >> a >>b)
   {
      cout << gcd(a,b) << endl;
   }
   
}

int gcd(int m,int n)
{
   int r=0;
   while (n!=0)
   {
      r=m%n;
      m=n;
      n=r;
   }

   return m;
}
