#include<stdio.h>
#include<math.h>
int main()
{
    int x1,b,a,c,x2,d;
    printf("enter the value of a,b,c=");
    scanf("%d%d%d",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/2*a;
    x2=(-b-d)/2*a;
    printf("%d%d",x1,x2);
    return 0;
}
