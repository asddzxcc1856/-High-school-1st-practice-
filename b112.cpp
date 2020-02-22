#include <iostream>
using namespace std;

int gcd(int m,int n)
{
   if (n==0) return m;
   else return gcd(n,m%n);
}

int main ()
{
   int a;
   while (cin >>a )
   {
      int num[505]={},max=0,gcd_num=0,c=1;
      for (int i=0;i<a;i++)
      {
         cin >> num[i];
      }
      for (int e=0;e<a-1;e++)
      {
         for (int k=e+1;k<a;k++)
         {
            if (c)
            {
               gcd_num=gcd(num[e],num[k]);
               c=0;
               max=gcd_num;
            }
            gcd_num=gcd(num[e],num[k]);
            if (max>gcd_num)
            {
               max=gcd_num;
            }
         }
      }
      cout << max << endl;
   }
}
