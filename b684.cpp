#include <iostream>
using namespace std;

int main ()
{
   int n;
   while (cin >> n)
   {
      int s[10000],y=0;
      for (int i=0;i<n;i++) cin >> s[i];
      for (int i=0,que=1;i<n && que!=n;i++)
      {
         for (int k=0;k<n;k++)
         {
            if (s[k]==0) continue;
            else if (que==s[k])
            {
               s[k]=0;
               que++;
            }
         }
         if (que-1==n) break;
         else y++;
         for (int d=n-1;d>=0;d--)
         {
            if (s[d]==0) continue;
            if (que==s[d])
            {
               s[d]=0;
               que++;
            }
         }
         if (que-1==n) break;
         else y++;
      }
      cout << y << endl;
   }
}
