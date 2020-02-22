#include <iostream>
#include <cstring>
using namespace std;

int sstr[105][105];
int LCS(char a[],char b[]);

int main ()
{
   char s[105]="",t[105]="";
   while (cin >>s>>t)
   {
      cout << LCS(s,t) <<endl;
   }
      return 0;
}

int LCS(char a[],char b[])
{
   int i,j;
   int len1=strlen(a);
   int len2=strlen(b);
   memset(sstr,0,sizeof(sstr));
   for (i=1;i<=len1;i++)
   {
      for (j=1;j<=len2;j++)   
      {
         if(a[i-1]==b[j-1])sstr[i][j]=sstr[i-1][j-1]+1;
         else sstr[i][j]=max(sstr[i-1][j],sstr[i][j-1]);
      }
   } 
   return sstr[len1][len2];
}
