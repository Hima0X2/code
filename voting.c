#include<stdio.h>
int main()
{
    int a;
    printf("enter the number of a=");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("%d you are allowed from vote",a);
    }
    else
    {
        printf("%d you are not allowed from vote",a);
    }
    getch();
    return 0;
}
