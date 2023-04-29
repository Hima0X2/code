#include<stdio.h>
int main()
{
     int i,n;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     if(i%3==0)
     {
          continue;
     }
     printf("%d\n",i);
     if(i==10)
     {
          break;
    } }
}
