#include <iostream>
using namespace std;

class player
{
public:
   double x,y;
   void play(double s1,double s2,int a,int b)
   {
      x=a*s1;
      y=b*s2;
   }
};


int main ()
{
   player p;
   p.play(0.8,0.9,4,7);
   cout << p.x << " " << p.y << endl;
   return 0;
}
