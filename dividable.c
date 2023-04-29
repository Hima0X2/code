#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a=");
    scanf("%d",&a);
    if((a%5==0)&&(a%11==0))
    {
        printf("%d dividable",a);
    }
    else
    {
        printf("%d not dividable",a);
    }
    return 0;
}
