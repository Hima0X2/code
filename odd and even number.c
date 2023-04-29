#include<stdio.h>
int main()
{
   int sum=0,r,c,i,j,a[10][10];
    printf("enter row &column=");
    scanf("%d%d",&r,&c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix=\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     for(i=0; i<r;i++)
    {
        for(j=0; j<c;j++)
        {
        if(a[i][j]%2==0)
        {
             printf("even  ");
        printf("%d\n",a[i][j]);
        }
        else
        {
             printf("odd  ");
        printf("%d\n",a[i][j]);
        }
        }
        }
        return 0;}
