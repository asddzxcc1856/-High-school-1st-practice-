#include <iostream>
using namespace std;

int main ()
{
   int a;
   while (cin >>a)
   {
      int b[15]={},ans_1=0,max=0;
      for (int i=0;i<a;i++)
      {
         cin >> b[i]; 
      }
      for (int i=0;i<a;i++)
      {
         if (b[i]>max)
            {
            max=b[i];
            ans_1=i+1;  
            }
      }
      cout << ans_1 << " " << max << endl;
      
   }
}
