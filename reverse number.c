#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        x=i+x*10;
        n=n/10;
    }
    printf("%d\n",x);
    return 0;
}
