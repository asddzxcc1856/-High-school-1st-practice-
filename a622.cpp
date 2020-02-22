#include <iostream>
#include <sstream>
using namespace std;

int main ()
{
   string s,a;
   int x;
   while (getline(cin,s))
   {
      x=0;
      stringstream ss(s);
      for (int i=0;;i++)
      {
         ss.clear();
         ss.str();
         ss(s);
         while (ss >> a)
            cout << a[i] << " ";
         a.clear();
         cout << endl;
      }
   }
}
