#include <iostream>
using namespace std;

int main ()
{
   int n,m;
   while (cin >> n >>m)
   {
      long long int lin,lin2,pos=0,pos2=0;
      for (int i=0;i<m;i++)
      {
         long long int q[n];
         q[0]=1;
         q[1]=2;
         q[2]=4;
         cin >> lin >> lin2;
         if (lin==0)
         {
            for (int k=3;k<lin2 && k<n;k++)
            {
               q[k]=q[k-1]+q[k-2]+q[k-3];
            }
            if (lin2>n) continue;
            else if (lin2>pos2)
               cout << q[lin2-1]-pos << endl;
            else if (lin2==pos2)
               cout << "0" << endl;
            else if (lin2<pos2)
               cout << q[lin2-1]<< endl;
            else if (lin2==0)
               cout << "0" << endl;
         }
         else if (lin==1)
         {
            pos=q[lin2-1];
            pos2=lin2;
         }
      }
   }
}
