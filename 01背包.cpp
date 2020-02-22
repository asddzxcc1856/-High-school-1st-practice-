#include <iostream>
#include <cstring>
using namespace std;

int c[1000][1000];

void knapsack()
{
   memset(c,0,sizeof(0));
   int all,maxl;
   cin >> all >> maxl;
   int p[all+1],v[all+1];
   for (int i=1;i<=all;i++)
      cin >> p[i] >> v[i];
   for (int i=1;i<=all;i++)
   {
      for (int j=1;j<=maxl;j++)
      {
         if (p[i]<=j)
         {
            if(v[i]+c[i-1][j-p[i]]>c[i-1][j]) c[i][j]=v[i]+c[i-1][j-p[i]];
            else c[i][j]=c[i-1][j];
         }
         else c[i][j]=c[i-1][j];
      }
   }
   cout << c[all][maxl] << endl;
}

int main ()
{
   knapsack();
}
