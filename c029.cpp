#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
   int a[2000],x,y;
   cin >> x;
   for (int i=0;i<x;i++) cin >> a[i];
   cin >> y;
   for (int i=x;i<y+x;i++) cin >> a[i];
   sort(a,a+x+y);
   for (int i=0;i<y+x-1;i++) cout << a[i] << " ";
   cout << a[y+x-1] << endl;
   return 0;
}
