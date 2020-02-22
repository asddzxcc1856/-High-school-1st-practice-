#include <iostream>
using namespace std;

int main ()
{
   int a,ans;
   while (cin >> a)
   {
      for (int i=0;i<=a;i++)
      {
         ans=1;
         for (int j=0;j<i;j++)
         {
            ans*=2;
         }
         cout << "2^" << i << " = " << ans << endl;
      }
   }
   
}
