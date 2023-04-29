//sum of factioral of digit
#include<stdio.h>
int main()
{
    int n,i,r,sum=0,f=1,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        for(i=1; i<=r; i++)
        {
            f=f*i;
        }
        sum=sum+f;
        temp=temp/10;
        f=1;
    }
    if(sum==n)
    {
        printf("%d strong number",n);
    }
    else
    {
        printf("%d not strong number",n);
    }
    return 0;
}
