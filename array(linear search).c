#include<stdio.h>
int main()
{
     int a[10],pos,n,i;
     printf("enter n=");
     scanf("%d",&n);
     int value=5;
     for(i=1;i<=n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=1;i<=n;i++)
     {
          if(value==a[i])
          {
               pos=0;
               pos=pos+i;
               break;
          }
     }
     printf("The position of %d is:%d ",value,pos);
     if(pos==0)
          printf("Not found");
     else
          printf("The position of %d is:%d ",value,pos);
}
