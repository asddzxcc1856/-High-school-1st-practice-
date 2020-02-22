#include <iostream>
using namespace std;

int main ()
{
   int a,b,c,d;
   while (cin>> a >> b >> c >> d)
   {
      int degree=1080;
      if (a==0 && b==0 && c==0) 
      {
         return 0;
      }                                 
      if (a==b) degree+=0;              
      else if (b==0 && degree!=0)         
      {                                
         degree+=a*9;              
      }
      else if (b!=0)
      {
         if (b>=a)                                      
         degree+=(40-b+a)*9;                    
         else if (a>b)                       
         {
            degree+=(a-b)*9;                
         }
      }
      if (b==c) degree+=0;                   
      else if (c==0 && degree!=0)
      {
         degree+=(40-b)*9;                
      }
      else if (c!=0)
      {
         if (c>=b)
         degree+=(c-b)*9;               
         else if (b>c)
         {
            degree+=(40-b+c)*9;        
         }
      }
      if (c==d) degree+=0;
      else if (d==0 && degree!=0)
      {
         degree+=c*9;                   
      }
      else if (d!=0)
      {
         if (d>=c)                             
         degree+=(40-d+c)*9;               
         else if (c>d)
         {
            degree+=(c-d)*9;              
         }                                      
      } 
      if (degree!=0)
      cout << degree << endl;
   }
   
} 
