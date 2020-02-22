#include <iostream>
using namespace std;

int main ()
{
   int n;
   while (cin >> n)
   {
      for (int i=2;i<=n;i++)
      {
         int max=0;
         while (n%i==0)
         {
            n/=i;
            max++;
         }
         if (max>1 && n!=1)
            cout << i << "^" << max << " * ";
         else if (max>1 && n==1)
            cout << i << "^" << max;
         else if (max==1 && n!=1)
            cout << i << " * ";
         else if (max==1 && n==1)
            cout << i;  
      }
      cout << endl;
   }
}
