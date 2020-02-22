#include <iostream>
using namespace std;

int main ()
{
   int m,n;
   
   while (cin >> m >> n)
   {
      int sum=0,c=0;
      for (int i=1;i<m;i++)
      {
         sum++;
      }
      c=sum;
      for (int i=0;i<(c+1)*(n-1);i++)              //// * * * *
      {                                            //// * * * *
         sum++;
      }
      cout << sum << endl;
   }
}
