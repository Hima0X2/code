#include<stdio.h>
int main()
{
    int number;
    printf("enter the number of number=");
    scanf("%d",&number);
    if(number%5==0 && number%8!=0)
    {
        printf(" the number is divisible by 5");
    }
    else if(number%8==0 && number%5!=0)
    {
     printf("the number is divisible by 8");
    }
    else if( number%5==0 && number%8==0)
    {
        printf("the number is divisible by 8 and 5");
    }
    else
    {
        printf("none of this");
    }
}
