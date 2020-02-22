#include <iostream>
using namespace std;

int main ()
{
   long long int a,b;    // 測資有 a的63次方  
   while (cin >> a >> b)
   {
      if (a>=b)
      {
         cout << a-b << endl;
      }
      else
      {
         cout << b-a << endl;
      }
   }
}
