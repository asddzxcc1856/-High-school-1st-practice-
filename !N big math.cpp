#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
   int c[10000],temp,x,q,i,digit=1,carry;
   memset(c,0,sizeof(0));
   cin >> x;
   c[0]=1;
   for (i=2;i<=x;++i)
   {
      for (carry=0,q=1;q<=digit;++q)
      {
         temp=c[q-1]*i+carry;
         c[q-1]=temp%10;
         carry=temp/10;
      }
      while (carry)
      {
         c[++digit-1]=carry%10;
         carry/=10;
      }
   }
   for (int q=digit-1;q>=0;--q)
   {
      cout << c[q];
   }
   cout << endl;
}
