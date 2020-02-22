#include <iostream>
#include <sstream>
using namespace std;

int main ()
{
   string s;
   while (getline(cin,s))
   {
      stringstream ss(s),ss2;
      char c;
      int num=0;
      double f=0,all_odd=0,all_even=0;
      while (ss>>num>>c>>f)
      {
         if (num%2==0)
         {
            all_even+=f;
         }
         else if (num%2!=0)
         {
            all_odd+=f;
         }
      }
      cout << all_odd-all_even << endl;
   }
}
