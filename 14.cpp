#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
   char a[50];
   while (cin >> a)
   {
      cin.get();
      int b[50]={};
      for (int i=0;i<strlen(a)-1;i++)
      {
         if (a[i]>=a[i+1])
         {
            cout << a[i]-a[i+1];
         }
         else
         {
            cout << a[i+1]-a[i];
         }
      }
      cout << endl;
   }

}
