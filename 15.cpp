#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
int n; cin>>n;
while(n--)
{ string s; cin>>s;
if(s.size () ==5) {cout<<3<<endl; continue;}
int wrong =0;
if(s[0]!='o') wrong ++ ;
if(s[1]!='n') wrong ++ ;
if(s[2]!='e') wrong ++ ;
if(wrong<=1) cout<<1<<endl; else cout<<2<<endl; 
}


return 0;
}
