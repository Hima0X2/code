#include<stdio.h>
int main()
{
     int n,x=0,temp,i;
     scanf("%d",&n);
     temp=n;
    while(temp!=0)
    {
         i=temp%10;
         x=x+i*i*i;
         temp=temp/10;
    }
   if(x==n)
   {
        printf("%d armstrong number",n);
   }
   else
   {
       printf("%d not armstrong number",n);
   }
     return 0;
}


