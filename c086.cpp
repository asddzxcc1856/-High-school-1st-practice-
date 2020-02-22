#include <iostream>
#include <list>
using namespace std;

int x,card[20];
list<int> li;
list<int>::iterator it;

void lucky()
{
   int i,j;
   for (i=0;i<20;++i)
   {
      for (it=li.begin(),j=1;it!=li.end();j++)
      {
         if (j==card[i])
         {
            if (li.size()==x) return;
            it=li.erase(it);
            j=0;
         }
         else it++;
      }
   }
}

int main ()
{
   int i,w,num=1;
   while (cin >> w >> x)
   {
      li.clear();
      for (i=1;i<=w;++i) li.push_back(i);
      for (i=0;i<20;++i) cin >> card[i];
      lucky();
      cout << "Selection #" << num++ << endl;
      for (it=li.begin(),i=0;i<li.size()-1;i++)
         cout << *it++ << " ";
      cout << *it<<endl << endl;
   }
   return 0;
}
