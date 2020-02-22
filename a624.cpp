#include <iostream>
using namespace std;

int main ()
{
   string s;
   while (cin >> s)
   {
      int a=0,b=0,c=0,ans=0;
      for (int i=0;i<s.length();i++)
      {
         if (s[i]>=65 && s[i]<=90)
         {
            a=1;
         }
         else if (s[i]>=97 && s[i]<=122)
         {
            b=1;
         }
         else
         {
            c=1;
         }
      }
      if (s.length()>=8)
         ans+=1;
      if (a==1 && b==1)
         ans+=1;
      if (c==1 && (a==1 || b==1))
         ans+=1;
      if (ans>=3)
      {
         cout << "This password is STRONG" << endl;
      }
      else if (ans==2)
      {
         cout << "This password is GOOD" << endl;
      }
      else if (ans==1)
      {
         cout << "This password is ACCEPTABLE" << endl;
      }
      else
      {
         cout << "This password is WEAK" << endl;
      }
   }
}
