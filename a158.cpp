#include <iostream>
#include <sstream>
using namespace std;

int gcd(int a,int b)
{
   if (b==0) 
      return a;
   else
      return gcd(b,a%b);
}

int main ()
{
   int q;
   while (cin>>q)
   {
   		cin.get();   	
      for (int i=0;i<q;i++)
      {
         string s="";
         getline(cin,s);
         stringstream ss(s);
         int e,w,k=0,a=0,f[1005]={},num=0,max=0; 
         while (ss >> a)
         {
            f[k]=a;
            k++;
         }
         for (e=0;e<k-1;e++)
         {
            for (w=e+1;w<k;w++)
            {
                  num=gcd(f[e],f[w]);
                  if (max<num)
                  {
                     max=num;
                  }
               
            }
         }
         if (max!=0)
            cout << max << endl;
         ss.clear();
         ss.str("");
      }
   }
}
