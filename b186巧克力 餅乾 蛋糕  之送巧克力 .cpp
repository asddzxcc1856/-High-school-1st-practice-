#include <iostream>
using namespace std;

int main ()
{
   int a,b,c;
   while (cin >> a >> b >> c)   // a 餅乾 b 巧克力 c 蛋糕    每 10個餅乾 2個蛋糕 就多送一個巧克力     
   {
      int s=0,g=0,add=0;
      if (a>=10 && c>=2)
      {
         s=a/10;
         g=c/2;
         if(s>=g)
         {
            add=s-(s-g);   
            cout << a << " 個餅乾，" << b+add << " 盒巧克力，" << c << " 個蛋糕。" << endl;  // 注意中文 
         }
         else 
         {
            add=g-(g-s);
            cout << a << " 個餅乾，" << b+add << " 盒巧克力，" << c << " 個蛋糕。" << endl; 
         }
      }
      else
         cout << a << " 個餅乾，" << b << " 盒巧克力，" << c << " 個蛋糕。" << endl; 
   }
   
} 
