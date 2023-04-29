#include<stdio.h>
int main()
{
     int a[10],pos=0,n,i;
     printf("enter n=");
     scanf("%d",&n);
     int value=5;
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
          if(value==a[i])
          {
               pos=pos+i;
               break;
          }
     }
     if(pos==0)
          printf("Not found");
     else
          printf("The position of %d is:%d ",value,pos);
}
