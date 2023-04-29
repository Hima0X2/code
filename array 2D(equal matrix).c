#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],i,j,row1,column1,row2,column2,equal=0;
    printf("enter 1st row and column=");
    scanf("%d%d",&row1,&column1);
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter 2nd row and column=");
    scanf("%d%d",&row2,&column2);
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("a matrix=\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("b matrix=\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<column2; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if((row1==row2)&&(column1==column2))
    {
        printf("the matrix can be compared\n");
        for(i=0; i<row1; i++)
    {
        for(j=0; j<column1; j++)
        {
            if(a[i][j]!=b[i][j])
            {
                equal=1;
                break;
            }
            else
            {
                if(equal==0)
                {
                    printf("the matrix is equal\n");
                }
                else
                {
                    printf("the matrix is not equal\n");
                }
            }
        }
    }
    }
    else
    {

        printf("the matrix can't be compared\n");
    }
    return 0;
}
