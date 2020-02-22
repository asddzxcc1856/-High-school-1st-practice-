#include <iostream>
using namespace std;

int main ()
{
   float a,max,ans;
   while (cin >> a)
   {
      max=0;
      ans=0;
      for (float i=2;;i++)
      {
         max+=1/i;
         ans++;
         if (max>=a)
            break;
      }
      cout << ans << " card(s)" << endl;
   }
}
