#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b,c=");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d largest number",a);
        }
        else
        {
            printf("%d largest number",c);
        }
    }
    else{if(b>c)
        {
            printf("%d largest number",b);
        }
        else
        {
            printf("%d largest number",c);
        }

    }getch();
    return 0;
}
