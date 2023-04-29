#include<stdio.h>
int main()
{
     int a[100][100],i,j,n,b[100][100],sum[100][100];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
               scanf("%d",&a[i][j]);
          }
          printf("\n");
     }
      for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
               scanf("%d",&b[i][j]);
          }
          printf("\n");
     }
      for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
               sum[i][j]=a[i][j]-b[i][j];
          }
     }
       for(i=0;i<n;i++)
     {
          for(j=0;j<n;j++)
          {
               printf("%d\t",sum[i][j]);
          }
          printf("\n");
          }



}
