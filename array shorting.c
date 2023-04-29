#include<stdio.h>
int main()
{
     int a[10],n,i,j,temp=0;
     printf("enter the value of n=");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(a[i]>a[j])
               {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
               }
          }
     }
     for(j=0;j<n;j++)
     {
          printf("%d ",a[j]);
     }
     return 0;
}
