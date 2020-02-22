#include <iostream>
using namespace std;

int main ()
{
   int d; // 用來輸入十進位值 
   string b = ""; // 用來存二進位值 
   while (cin >> d) // 輸入十進位值 
   {
      b = "";  
      for(; d > 0; d /= 2) /* 迴圈一層判定就夠了，也可以使用while(d > 0)，但是迴圈最下面就需要再加入d /= 2來做運算 */ 
      { 
      char x = (d%2) + '0'; // 將餘數轉換成字元 
      b = x + b; // 將字元加入字串 
      } 
      cout << b  << endl;
   }
}
