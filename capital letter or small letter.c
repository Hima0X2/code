#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a,b=");
    scanf("%d",&a);
    if(a>='a'&&a<='z')
    {
        printf("%c lower case",a);
    }
    else
    {
        printf("%c upper case",a);
    }
    getch();
    return 0;
}
