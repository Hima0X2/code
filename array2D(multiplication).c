#include<stdio.h>
int main()
{
    int a[100][100],i,j,k,b[100][100],c[100][100],r1,r2,c1,c2,sum=0;
    printf("enter row & column for 1st matrix=");
    scanf("%d%d",&r1,&c1);
    printf("enter 1st matrix:\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter row & column for 2nd matrix=");
    scanf("%d%d",&r2,&c2);
    printf("enter 2nd matrix:");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    if(r1!=c2)
    {
        printf("this is impossible");
    }
    else
    {
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                for(k=0; k<c1; k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                    c[i][j]=sum;
                    sum=0;
            }
             for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("[%d][%d]=",i,j);
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("[%d][%d]=",i,j);
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
        }
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
                {
                    printf("%d\t",c[i][j]);
                }
                printf("\n");
        }

    }
}
