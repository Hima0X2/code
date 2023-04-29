#include<stdio.h>
int main()
{
    int month,days;
    printf("enter the days",days);
    scanf("%d",&days);
    month=days/30;
    days=days-month*30;
    printf("%d%d",month,days);
    getch();
    return 0;
}
