#include<stdio.h>
int main()
{
    char lower,upper;
    printf("enter any upper letter:");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("uppercase letter=%c",lower);
}
