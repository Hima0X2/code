#include<stdio.h>
int main()
{
    int a,b,s;
    printf("enter the value of a,b=");
    scanf("%d%d",&a,&b);
    if(b>a)
    {
        s=a;
    }
        else
            s=b;
        {
            back:
            if((a%s==0)&&(b%s==0))
                printf("%d GCD",s);
                else
                {s--;
                    goto back;}
        }

    return 0;
}
