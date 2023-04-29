#include<stdio.h>
int main()
{
     int f=1,n,i;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          f=i*f;
     }
     printf("%d",f);}
