#include <iostream>
using namespace std;

int main ()
{
   while (1)
   {
      int o=0,a=0,sum=0,end=300,g=0,c=0;
      cin >> a; 
      cout << endl;                                   //  290 230  280 200 300  170 340 50 90 80 200 60
      end-=a;  
      for (int i=2;i<10 && o==i;i++)
      {
            cin >> a; 
            cout << endl;                                   //  290 230  280 200 300  170 340 50 90 80 200 60                                      //  300-290==10
            end+=300;
            end=end-a;
            if (end<0)
            {
               cout << "-"<< i << endl;
               o=i;
            }
            else if (end>=0)                                              
               {
                  if (end>=100 )                                // 1--->310-230 2--> 3--->> 4---> 
                  {
                     g=end/100;
                     end=end%100;
                     sum+=g*100;
                     end-=g*100;
                  }
               }
         }
         cout << end+sum << endl;
   }
}
