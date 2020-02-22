#include <iostream>
#include <algorithm>
using namespace std;

int timeadd(long long int n,long long int d[]);
int main ()
{
   long long int n;
   while (cin >> n)
   {
      long long int d[n];
      for (int i=0;i<n;i++) cin >> d[i];
      sort(d,d+n);
      timeadd(n,d);
   }
}
int timeadd(long long int n,long long int d[])
{
   long long int i,all_time=0,some_time=0;
   for (i=0;i<n;i++)
   {
      all_time+=some_time;
      some_time+=d[i];
   }
   cout << all_time*100 << endl;
   return 0;
}
