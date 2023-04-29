#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the number of a,b=");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d%d",a,b);
    getch();
    return 0;
}
