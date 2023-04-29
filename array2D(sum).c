#include<stdio.h>
int main()
{
    int rownum,colnum,i,j,A[10][10],B[10][10],C[10][10];
    printf("enter number of rows=");
    scanf("%d",&rownum);
    printf("enter number of column=");
    scanf("%d",&colnum);
    printf("enter 1st matrix=");
    for(i=0; i<rownum; i++)
    {
        for(j=0; j<colnum; j++)
        {
          printf("A[%d][%d]=",i,j);
        scanf("%d\n",&A[i][j]);
        }

    }
    printf("\n");
    for(i=0; i<rownum; i++)
    {
        for(j=0; j<colnum; j++)
        {
            printf("1st metrix=%d\t",A[i][j]);
        }
        printf("\n");
    }
     for(i=0; i<rownum; i++)
    {
        for(j=0; j<colnum; j++)
        {
          printf("B[%d][%d]=",i,j);
        scanf("%d\n",&B[i][j]);
        }

    }
    printf("\n");
    for(i=0; i<rownum; i++)
    {
        for(j=0; j<colnum; j++)
        {
            printf("2nd metrix=%d\t",B[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<rownum; i++)
    {
        for(j=0; j<colnum; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("3rd metrix=%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;



}
