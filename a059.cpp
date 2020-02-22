#include <iostream>
using namespace std;

int main ()
{
   int t,a,b;
   while (cin >> t) 
   {
      for (int i=1;i<=t;i++)
      {
         int sum=0;
         cin >> a >>b;
         cout << "Case " << i <<": ";
         for (int i=1;i<=b;i++)
         {
            if (i*i<=b && i*i>=a)
               sum+=i*i;
         }
         cout << sum << endl;
      }
   }
}
