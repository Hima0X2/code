#include<stdio.h>
int main()
{
    char ch;
    float a,b,c;
    printf("enter the operator");
    scanf("%c",&ch);
    printf("enter the number of a,b= ");
    scanf("%f%f",&a,&b);
    switch(ch)
    {
        case 'A':
        c=a+b;
        printf("the sum is %f",c);
        break;
        case 'B':
        c=a-b;
        printf("the minus is %f",c);
        break;
        case 'C':
        c=a*b;
        printf("the multiplication is %f",c);
        break;
        case 'D':
        c=a/b;
        printf("the division is %f",c);
        break;
        default:
            printf("not valid operator");
            break;
    }

}
