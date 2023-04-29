#include<stdio.h>
int main()

{
    int x,y;
    printf("enter the value of x=");
    scanf("%d",&x);
      y=x++;
    printf("%d the number\n",x);
    printf("%d the number\n",y);
     printf("enter the value of x=");
    scanf("%d",&x);
    y=++x;
    printf("%d the number\n",x);
    printf("%d the number\n",y);
     printf("enter the value of x=");
    scanf("%d",&x);
    y=x--;
    printf("%d the number\n",x);
    printf("%d the number\n",y);
     printf("enter the value of x=");
    scanf("%d",&x);
      y=--x;;
    printf("%d the number\n",x);
    printf("%d the number\n",y);
}

