#include<stdio.h>
int main()
{
     int a[100],b[100],i,n;
     printf("enter n=");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
     scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
          b[i]=a[i];
     }
     printf("\nanother array=\n");
     for(i=0;i<n;i++)
     {
          printf("%d\n",b[i]);
     }
}
