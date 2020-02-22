#include <iostream>
using namespace std;

int main ()
{
   int m;
   while (cin >> m)
   {
      double a[500],sum=0;
      for (int i=0;i<m;i++)
      {
         cin >>a[i];
         sum+=a[i];
      }
      cout << sum << endl;
      if (sum/m>59)
         cout << "no" << endl;
      else 
         cout << "yes" << endl;
   }
}
