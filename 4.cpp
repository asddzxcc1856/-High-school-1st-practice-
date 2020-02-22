#include <iostream>
using namespace std;

int main ()
{
   int a,b,c;
   while (cin >> a >> b >>c)
   {
      int sum[11],max=0;
      sum[0]=a+b+c;
      sum[1]=a*b+c;
      sum[2]=a+b*c;
      sum[3]=a*10+b+c;
      sum[4]=a+b*10+c;
      sum[5]=a*(b*10+c);
      sum[6]=(a*10+b)*c;
      sum[7]=a*b*c;
   for (int i=0;i<8;i++)
   {
      if (sum[i]>max)
         max=sum[i];
   }
   cout << max << endl;
   }
}

