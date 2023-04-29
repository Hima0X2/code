#include<stdio.h>
int main()
{
   int a[10],n,i;
   printf("enter N");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=(n-1);i>=0;i--)
   {
      printf("%d\n",a[i]);
   }
}
