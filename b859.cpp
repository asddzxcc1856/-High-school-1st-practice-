#include <iostream>
using namespace std;

int main ()
{
   int n,c1,c2;
   while (cin >> n)
   {
      for (int i=0;i<n;i++)
      {
         cin >> c1 >> c2;
         int s[c1],q[c1],ans[10000]={},max=0,ww,dd;
         for (int k=0;k<c1;k++)
         {
            cin >> s[k] >> q[k];   
         }
         for (int k=0;k<c1;k++)
         {
            if (s[k]>=s[c2-1] && q[k]>=q[c2-1])
            {
               if ((ww<=s[k] && dd>=q[k])||(ww>=s[k] && dd<=q[k]))
                  ans[max++]=k+1;
               else if (ww<s[k] && dd<q[k])
               {
                     max=0;
                     ans[max++]=k+1;
               }
               ww=s[k];
               dd=q[k];
            }
         }
         cout << max << endl;
         for (int w=0;w<max-1;w++)
            cout << ans[w] << " ";
         cout << ans[max-1] << endl;
      }
   }
}
