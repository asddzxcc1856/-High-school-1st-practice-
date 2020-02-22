#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
   char s[1000];
   int t;
   while (cin >> t)
   {
      while (cin >> s)
      {
         int sum=1;
         for (int i=0;i<strlen(s);i++)
         {
            sum=sum*(s[i]-'0');   
         }      
         cout << sum << endl;
         s[1000]={0};
      } 
   }
}
