#include <iostream>
using namespace std;

int main ()
{
   int a,b;
   while (cin >> a >> b)
   {
      int sum=0,s=1;
      for (int i=a;(i+sum)<=b;i++)
      {
         sum=sum+i; 
         s++;
      }
      cout << s << endl;
   }
}
