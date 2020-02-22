#include <iostream>
using namespace std;

int main ()
{
   int m,x,y,num,q,ans;
   while (cin >>m)
   {
      for (int i=0;i<m;i++)
      {
         int sum=0,ans=0;
         cin >> x >> y;
         int c[x],d[y];
         for (int k=0;k<x;++k)
         {
            cin >> c[k];
         }
         for (int j=0;j<x;++j)
         {
            cin >> d[j];
         }
         for (int k=0;k<x;++k)
         {
            sum=0;
            for (int j=k;j<x;j++)
            {
               if (j-k>y)
                  sum+=d[j];
            }
            ans+=sum*d[k];
         }
         cout << ans << endl;
      }
   }
}
