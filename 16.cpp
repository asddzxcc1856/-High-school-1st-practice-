#include<cstdio>

int main ()
{
   int a[9];
   while (scanf("%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8])!=EOF)
   {
      int x=0;
      for (int i=0;i<9;i++)
      {
         x=10-i-2;
         if (x==0 && a[i]>0)
         {
            printf("%d",a[i]);
            a[i]=0;
            break;
         }
         else if (x==0 && a[i]<0)
         {
            printf("%d",a[i]); 
            a[i]=0;
            break;
         }
         else if (x==1 && a[i]==1)
         {
            printf("x");
            a[i]=0;
            break;
         }
         else if (x==1 && a[i]==-1)
         {
            printf("-x");
            a[i]=0;
            break;
         }
         else if (a[i]!=0 && a[i]!=1 && a[i]!=-1)
            {
            printf("%dx^%d",a[i],x);
            a[i]=0;
            break;
            }
         else if (a[i]==1)
            {
            printf("x^%d",x);
            a[i]=0;
            break;
            }
         else if (a[i]==-1)
            {
            printf("-x^%d",x);
            a[i]=0;
            break;
            }
         else if (a[i]==0 && x==0)
            {
               printf("%d",a[i]);
               break;
            }
      }
      for (int i=10-x-1;i<9;i++)
      {
         x-=1;
         if (x==0 && a[i]>0)
            printf(" + %d",a[i]);
         else if (x==0 && a[i]<0)
            printf(" - %d",-a[i]); 
         else if (x==1 && a[i]==1)
            printf(" + x");
         else if (x==1 && a[i]==-1)
            printf(" - x");
         else if (x==1 && a[i]<0)
            printf(" - %dx",-a[i]);
         else if (x==1 && a[i]>0)
            printf(" + %dx",a[i]);
         else if (a[i]>0 && a[i]!=1 && x!=1)
            printf(" + %dx^%d",a[i],x);
         else if (a[i]==1 && x!=1)
            printf(" + x^%d",x);
         else if (a[i]<0 &&a[i]!=-1 && x!=1)
            printf(" - %dx^%d",-a[i],x);
         else if (a[i]==-1 && x!=1)
            printf(" - x^%d",x);
      }
      printf("\n");
   }
}
