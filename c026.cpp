#include <iostream>
using namespace std;

int main ()
{
   int price,bonus,coo;
   cin >> price >> bonus;
   if (bonus>=10)
   {
      if (bonus>price*0.1)
      {
         if (price>=100)
         {
         coo=10*((price/10)/10);
         price-=coo;
         bonus=bonus-coo+price/100;
         }
         else
         {
         coo=price/10;
         price-=coo;
         bonus=bonus-coo+price/100;
         }
      }
      else
      {
         coo=10*(bonus/10);
         price-=coo;
         bonus=bonus%10+price/100;
      }
      cout << price << " " << bonus;
   }
   else
   {
      bonus=price/100;
      cout << price << " " << bonus;
   }
}
