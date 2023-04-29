#include<stdio.h>
#include<math.h>
int main()
{
     int i,n;
     long long int sum=0;
     printf("Enter the value of n=");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          sum=sum+pow(i,i);
     }
     printf("%lld\n",sum);
     return 0;
}
