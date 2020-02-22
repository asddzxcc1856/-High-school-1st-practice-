#include <iostream>
using namespace std;

int main()
{
   int a;
   while (cin >> a)
   {
      for (int i=1;i<=a;i++)
      {
         for (int j=0;j<a-i;j++)
            cout << "_";
         for (int j=0;j<i*2-1;j++)
            cout << "*";
         for (int j=0;j<a-i;j++)
            cout << "_";
         cout << endl;
      }   
   }   
} 
