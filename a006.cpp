#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
   int a,b,c,x1,x2;
   while (cin >> a >> b >> c)
   {
      x1=(-b+sqrt(b*b-4*a*c))/(2*a);
      x2=(-b-sqrt(b*b-4*a*c))/(2*a);
      if (x1==x2 && b*b-4*a*c==0)
         cout << "Two same roots x=" << x1 << endl;
      else if (x1!=x2 && b*b-4*a*c>0)
         cout << "Two different roots x1=" << x1 <<" , x2=" << x2 << endl;
      else
         cout << "No real root" << endl; 
   }
}
