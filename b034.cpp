#include <iostream>
using namespace std;

int d[9]={1,5,10,50,100,500,1000,5000,10000};
int searchmoney(int);

int main ()
{
   int n;
   while (cin >> n)
   {
      searchmoney(n);
   }
}

int searchmoney(int n)
{
   int i,q[9],all=0;
   for(i=8;i>=0;i--)
   {
         q[i]=n/d[i];
         n%=d[i];
         all+=q[i];
   }
   cout << all;
}
