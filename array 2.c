#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("enter n=");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=0;
    for(i=1; i<n; i++)
    {
        if(max<=a[i])
        {
            max=a[i];
        }
    }
    printf("%d largest number",max);
}
