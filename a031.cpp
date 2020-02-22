#include <iostream>
using namespace std;

int main ()
{
   char a[9999999];
   while (cin >> a)
   {
      int g=4,max2=0,max1=0;
      char b[999999]={},c[999999]={},d[3];
      for (int i=0;i<a.size();i++) 
      {
         if (isdigit(a[i]) && g==4)
         {
            b[max2++]=a[i];
         }
         else
         {
            if (a[i]=='*') g=0;
            if (a[i]=='+') g=1;
            if (a[i]=='-') g=2;
         if (isdigit(a[i]) && g!=4)
         {
            c[max1++]=c[i]
         }
         }
         if (g==0) cout << b*c << endl;
         if (g==1) cout << b+c << endl;
         if (g==2) cout << b-c << endl;
      }
   
   }
}
