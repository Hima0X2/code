#include<stdio.h>
int main()
{
     int r,c,i,j,a[100][100],trans[100][100];
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
               trans[j][i]=a[i][j];
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
     printf("the transpose is=\n");
     for(i=0;i<c;i++)
     {
          for(j=0;j<r;j++)
          {
               printf("%d\t",trans[i][j]);
          }
          printf("\n");
     }
}
