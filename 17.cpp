#include<cstdio>
int pd(int x[],int s,int n){
    if(x[s]!=1) printf("%d",x[s]);
    if(s==(n-1)&&x[s]==1) printf("1");
}
int ans(int x[],int s,int n){
    if(n-s==2) printf("x ");
    else if(n-s>2) printf("x^%d ",n-s-1);
}
int main(){
    int x[9];
    while(~scanf("%d%d%d%d%d%d%d%d%d",&x[0],&x[1],&x[2],&x[3],&x[4],&x[5],&x[6],&x[7],&x[8])){
      bool start=false;
      int s;
   for(int i=0;i<9;i++)
   {
      if(start==false&&x[i]!=0) s=i,start=true;     
    }   
 if(start==false) printf("0\n");
 else{
    if(x[s]<0) printf("-"),x[s]*=-1;  
    pd(x,s,9);
    ans(x,s,9);
   for(int i=s+1;i<9;i++)
   {
    if(x[i]!=0){
      if(x[i]<0) printf("- "),x[i]*=-1;
      else printf("+ ");
     
     pd(x,i,9); ans(x,i,9);                     
     }       
    } 
    printf("\n");  
      }
      }}   
