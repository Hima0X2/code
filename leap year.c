#include<stdio.h>
int main()
{
    int year;
    printf("enter the value of year=");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("%d leap year",year);
    }
    else if((year%100!=0)&&(year%4==0))
    {
        printf("%d leap year",year);
    }
    else{printf("%d not leap year",year);}
    getch();
    return 0;
}
