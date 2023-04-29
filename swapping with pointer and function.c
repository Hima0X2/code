#include<stdio.h>
int swapping(int *p,int *q)
{
     int temp;
     temp=*p;
     *p=*q;
     *q=temp;
     return (*p,*q);
}
int main()
{
     int a,b;
     scanf("%d%d",&a,&b);
     printf("before swapping a=%d b=%d\n",a,b);
     swapping(&a,&b);
     printf("after swapping a=%d b=%d\n",a,b);
     return 0;
}
