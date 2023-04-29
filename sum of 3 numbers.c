#include<stdio.h>
int main()
{
  int a,b,c,sum;
  float avr;
  printf("enter the 3 numbers=");
  scanf("%d%d%d",&a,&b,&c);
  sum=a+b+c;
  avr=sum/3;
  printf("%d",sum);
  printf("%f",avr);
  getch();
  }
