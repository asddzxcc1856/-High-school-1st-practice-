#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
   string a;
   string b;
   int ans[10000],i,j;
   while (cin >> a >> b)
   {
      int lena=a.length();
      int lenb=b.length();
      memset(ans,0,sizeof(0));
      for (i=lena-1,j=0;i>=0;--i,++j) ans[j]+=(a[i]-48);
      for (i=lenb-1,j=0;i>=0;--i,++j) ans[j]+=(b[i]-48);
      
      for (i=0;i<lena && i<lenb;i++)
      {
         ans[i+1]+=ans[i]/10;
         ans[i]%=10;
      }
      for (;i>=0;i--)
      {
         cout << ans[i];
      }
   }
}
