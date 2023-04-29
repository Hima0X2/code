#include<stdio.h>
int main()
{
    int a,b,l;
    printf("enter the value of a,b=");
    scanf("%d%d",&a,&b);
    if(b>a)
    {
        l=b;
    }
        else
            l=a;
        {
            back:
            if((l%a==0)&&(l%b==0))
                printf("%d LCM",l);
                else
                {l++;
                    goto back;}
        }

    return 0;
}
