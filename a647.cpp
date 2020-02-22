#include <iostream>
using namespace std;

int main ()
{
   int q;
   while (cin >> q)
   {
      double ans,a,b;
      for (int i=0;i<q;i++)
      {
         cin >> a >> b;
         ans=(b-a)/a*100;
         if (ans>=10 || ans<=-7)
         {
            if (ans>0) ans+=0.0000001;
            else if (ans<0) ans-=0.0000001;
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << ans << "% " << "dispose"<< endl;
         }         
         else
         {
            if (ans>0) ans+=0.0000001;
            else if (ans<0) ans-=0.0000001;
            cout.setf(ios::fixed);
            cout.precision(2);
            cout << ans << "% " << "keep" << endl;
         }
      }
      
   }
}
