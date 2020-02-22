#include <iostream>
using namespace std;

int moneyall(int);

int main ()
{
   int n;
   while (cin >> n)
   {
      moneyall(n);
   }
}

int moneyall(int s)
{
   int i,j;
   int all[s];
   all[1]=1;
   int m[5]={2,5,10,20,25};
   for (i=0;i<=4;i++)
   {
      for (j=m[i];j<=s;j++)
      {
         all[j]=all[j]+all[j-m[i]];
      }
   }
   cout << all[s-1];
}

/*
(50):

   2 5 10 20 25
1  0 0 0  0  0
2  1 0 0  0  0
3  1 0 0  0  0  xx
4  2 0 0  0  0 
5  0 1 0  0  0 
6  0 1 0  0  0  xx
7  1 1 0  0  0
8  1 1 0  0  0  xx
9  2 1 0  0  0
10 0 0 1  0  0
11 0 0 1  0  0   xx 
12 1 0 1  0  0

*/
