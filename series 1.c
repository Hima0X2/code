//1*2+2*3+3*4+....n1*n2
#include<stdio.h>
int main()
{
    int n1,n2,i,sum=0;
    scanf("%d",&n1);
    n2=n1+1;
    for(i=1;i<n2;i++)
    {
         sum=sum+n1*n2;
    }
    printf("%d\n",sum);
    return 0;
}
