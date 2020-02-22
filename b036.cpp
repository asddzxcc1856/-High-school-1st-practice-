#include <iostream>
#include <algorithm>
using namespace std;

int minpay(int n,int s[]);

int main ()
{
   int n;
   while (cin >> n)
   {
      int s[n];
      for (int i=0;i<n;i++) cin >> s[i];
      sort(s,s+n);
      minpay(n,s);
   }
}

int minpay(int n,int s[])
{
   int i,all,some=s[0];
   for (i=1;i<n;i++)
   {
      some+=s[i];
      all+=some+s[i];
   }
   cout << some << endl;
   return 0;
}
