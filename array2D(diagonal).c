#include<stdio.h>
int main()
{
     int r,c,i,j,a[100][100],sum=0;
     printf("enter the number of row & column=");
     scanf("%d%d",&r,&c);
     printf("enter 1st matrix=");
     for(i=0;i<r;i++)
     {
          for(j=0;j<c;j++)
          {
               printf("a[%d][%d]",i,j);
               scanf("%d",&a[i][j]);
          }
     }
      for(i=0;i<r;i++)
     {
          for(j=0;j<c;j++)
          {
               printf("%d\t",a[i][j]);
          }
          printf("\n");
     }
          for(i=0;i<r;i++)
          {
               for(j=0;j<c;j++)
               {
                    if(i==j)
                      {
                           sum=sum+a[i][j];
                      }
               }
          }

                    printf("The sum is=%d",sum);
          }


