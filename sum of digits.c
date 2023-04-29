#include<stdio.h>
int main()
{
     int n,x=0,i,sum;
     scanf("%d",&n);
    while(n>9)
    {
         i=n%10;
         x=x+i;
         n=n/10;
    }
    sum=x+n;
   printf("%d\n",sum);
     return 0;
}

