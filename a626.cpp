#include <iostream>
#include <iomanip>
using namespace std;

int prime(int);

int main ()
{
   int q[1000],max=0;
   for (int i=2;i<=1000;i++)
   {
      if (prime(i)) q[max++]=i;
   }
   int s,y;
   while (cin >> s)
   {
      y=0;
      
      for (int i=0;q[i]<=s;i++)
      {
         y++;
         if (q[i]!=0)
            cout << setw(10) << q[i];
         if (y%5==0)
            cout << endl;
      }
      cout << endl;
   }
}

int prime(int x)
{
   if (x==2) return true;
   for (int i=2;i<x;i++)
      if (x%i==0) return 0;
   return 1;
}
