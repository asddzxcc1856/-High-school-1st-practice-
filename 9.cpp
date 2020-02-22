#include <iostream>
using namespace std;

int main ()
{
    int m;
    while (cin >> m)
    {
       int n=m;
       while (m>0)
      {
         for (int i=1;i<m;i++)
         {
            cout <<"_";
         }
          
         for (int i=0;i<n-m+1;i++)
         {
            cout << "*";
         }
         cout <<endl;
         m-=1;
      }
      
    }
}
