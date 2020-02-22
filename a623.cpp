#include <iostream>
using namespace std;

int main ()
{
   int m,n,ans;
   while (cin>>m>>n)
   {
      ans=1;
      for (int i=m;i>=1;i--)
      {
         ans*=i;
      }
      for (int i=n;i>=1;i--)
      {
         ans/=i;
      }
      for (int i=m-n;i>=1;i--)
      {
         ans/=i;
      }
      cout << ans << endl;
   }
}
