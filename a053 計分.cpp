#include <iostream>
using namespace std;

int main ()
{
   int a;
   while (cin >> a)
   {
      if (a>=40) cout << "100" << endl;
      else if (a>20) cout << 80+(a-20)*1 << endl;
      else if (a>10) cout << 60+(a-10)*2 << endl;
      else cout << a*6 << endl;
   }
}
