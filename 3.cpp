#include <iostream>
using namespace std;

int main ()
{
   int a,b;
   while (cin >> a >> b)
   {
         if (a==0 || b==0 && b>=a)
            cout << "Ok!" << endl;
         else if (b==0)
            cout << "Impossib1e!" << endl; 
         else if (a%b==0)
         {
            cout << "Ok!" << endl;
         }
         else 
         cout << "Impossib1e!" << endl; 
      }
   }
