#include<stdio.h>
int main()
{
  int n,h,sum=0;
printf("enter the value of n,h=");
scanf("%d%d",&n,&h);
while(n<=10)
{
   sum=n*h;
   printf("%d*%d=%d\n",n,h,sum);
   n++;
   }
   }
