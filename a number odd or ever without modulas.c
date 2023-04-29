#include<stdio.h>
int main()
{
     int n,x,y;
     printf("enter n=");
     scanf("%d",&n);
     x=n/2;
     y=x*2;
     if(y==n)
     {
     printf("even",x);
     }
     else
     {
          printf("odd");
     }
     return 0;
}
