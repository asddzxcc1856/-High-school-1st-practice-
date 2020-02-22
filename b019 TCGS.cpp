#include <iostream>
#include <algorithm>
using namespace std;

bool cmd(int a,int b)
{
   if (a>b) return 1;
   else 
      return 0;
}

int main ()
{
   int n;
   while (cin >> n)
   {
      int s[105];
      for (int i=0;i<n;i++) cin >> s[i];
      sort (s,s+n,cmd);
      for (int i=0;i<n-1;i++) cout << s[i] << " ";
      cout << s[n-1] << endl;
   }
}
