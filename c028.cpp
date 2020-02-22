#include <iostream>
using namespace std;

int main ()
{
   int e,x=10,level=1;
   cin >> e;
   if (e>=x)
      {
      for (int i=2;e>=x;i++)
      {
         e-=x;
         level++;
         x=x*2-i*3;
      }
   }
   cout << level << " " << x-e << endl;
}

/*
10 
10*2-2*3=14
14*2-3*3=19;
19*2-4*3=26;
26*2-5*3=37;   
*/
