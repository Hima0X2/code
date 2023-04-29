#include<stdio.h>
int main()
{
    int a[100][100],i,j,r,c,uppersum=0,lowersum=0;
    printf("enter row & column for matrix=");
    scanf("%d%d",&r,&c);
    printf("enter matrix:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
         for(j=0;j<c;j++)
         {
              if(i>j)
              {
                   lowersum=lowersum+a[i][j];
              }
              if(j>i)
              {
                   uppersum=uppersum+a[i][j];
              }
         }
    }
    printf("upper matrix:");
      for(i=0;i<j;i++)
    {
         printf("%d\n",a[i][j]);
    }
    printf("lower matrix");
    for(j=0;j<i;j++)
    {
         printf("%d\n",a[i][j]);
    }
    printf("The upper sum is %d\n",uppersum);
    printf("The lower sum is %d",lowersum);
    return 0;
}
