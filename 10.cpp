#include <iostream>
using namespace std;

int main ()
{
   int a,b,m,s,l=1;
   while (cin >> a)
   {
      while (cin >> b && a>0)
      {
         cout << "Track " << l <<":"<<endl;
         if (b==l) l=1;
         int mall=0,sall=0,q1[100]={0},q2[100]={0},max=0;
         for (int i=0;i<b;i++)
         {
            cin >> m >> s;
            mall+=m*60;
            sall+=s;
            q1[i]=m;
            q2[i]=s;
         }
         max=q1[0]*60+q2[0];
         for (int i=1;i<b;i++)
         {
            if (q1[i]*60+q2[i]<max)
              {
               max=q1[i]*60+q2[i];
            }
         }
      
      mall=(mall+sall)/b;
      cout << "Best Lap: " << max/60 << " minute(s) " << max%60 << " second(s)." << endl;
      cout << "Average: " << mall/60 << " minute(s) " << mall%60 << " second(s)." << endl;
       a-=1;
       l+=1;
      }
   }
}
