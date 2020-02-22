#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node{
   int w,x,y,z,q;
   Node(int a,int b,int c,int d,int e) : w(a),x(b),y(c),z(d),q(e) {}; 
};

struct cmp{
   bool operator()(Node a,Node b){
   if (a.q==b.q && a.x==b.x) return a.w>b.w;
   if (a.q==b.q) return a.x<b.x;
   if(a.q!=b.q) return a.q<b.q;
   
   
   }
};

int main ()
{
   int n,a,b,c;
   while (cin >> n)
   {
      priority_queue<Node,vector<Node>,cmp> gg;
      for (int i=1;i<=n;i++)
      {
         cin >> a >> b >> c;
         int d=a+b+c;
         gg.push(Node(i,a,b,c,d));
      }
      int fu=0;
      while (!gg.empty()&&fu!=5)
      {
         fu++;
         cout << gg.top().w << " " << gg.top().q << endl;
         gg.pop();
      }
   }
}
