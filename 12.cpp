#include <iostream>
using namespace std;

int main ()
{
   double num;
   while (cin >> num)
   {
      if (num>0)
      {
         cout.setf(ios::fixed);
         cout.precision(4);
         cout << "|"<< num <<"|=" << num << endl;
      }
      else
      {
         cout.setf(ios::fixed);
         cout.precision(4);
         cout << "|"<< num << "|=" << -num << endl;
       }
   }
}
