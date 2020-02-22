#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int m,a,b,c,x1,x2;
   while (cin>>m)
   {
      for (int i=0;i<m;i++)
      {
         cin >> a >> b >> c;
         cout << int(sqrt(b*b-a*4*c)) << " " << sqrt(b*b-a*4*c) << endl;
         if (sqrt(b*b-a*4*c)==int(sqrt(b*b-a*4*c)))
            cout << "Yes" << endl;
         else
            cout << "No" << endl;
      }
   }
}
