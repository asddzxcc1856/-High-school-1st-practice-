#include<iostream>    
using namespace std;
int main()
{
   int n,result;
   unsigned int a,b;
   while(cin>>a>>b>>n){
       result=a/b;
       cout << result << '.';
       a=a%b;       

       for (int counterN=0 ; counterN<n ; counterN++){
           a=a*10;
           result=a/b;
           cout << result;
           a=a%b;
       }

       cout << "\n";
   }
return 0;
}
