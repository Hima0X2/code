#include<stdio.h>
int main()
{
     int f[10],n,i,sum=0;
     scanf("%d",&n);
     f[0]=0;
     f[1]=1;
     for(i=2;i<=n;i++)
     {
          f[i]=f[i-1]+f[i-2];
          sum=f[i]+sum;
     }
     printf("%d\n",sum);
     return 0;
}
