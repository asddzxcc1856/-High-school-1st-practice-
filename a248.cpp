#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
int a,b,c,n,num=0;
while(cin>>a>>b>>n)
{
num=a/b;                               
a=a%b;
a*=10;
printf("%d.",num);
for(int i=0;i<n;i++)
{
num=a/b;
a=a%b;
a*=10;
printf("%d",num);
}
printf("\n");

}
}

 
