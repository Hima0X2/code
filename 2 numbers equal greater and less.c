#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the 2 number=");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        printf("the greater number is %d",b);
    }
    else if(b<a)
    {
        printf("the greater number is %d",a);
    }
    else
    {
            printf("the numbers are equal");
    }
}
