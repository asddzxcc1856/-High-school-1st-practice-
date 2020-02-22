#include <iostream>
using namespace std;

int main ()
{
   int a,b,c,d;
   while (cin >> a >> b >> c >> d)
   {
      if (a==0 && b==0 && c==0 && d==0)
         return 0;
      else   
      {
         int q1,q2,ans;
         if (c>=a)
            q1=c-a;
         else
            q1=a-c;
         if (d>=b)
            q2=d-b;
         else
            q2=b-d;
         if (q1==q2 && q1 && q2)
            ans=1;
         else if (q1!=q2 && q1==0 && q2 )
            ans=1;
         else if (q1!=q2 && q1 && q2==0 )
            ans=1;
         else if (q1!=q2)
            ans=2;
         else if (q1==q2 && q1==0 && q2==0)
            ans=0;
         cout << ans <<endl;
      }
   }
}
