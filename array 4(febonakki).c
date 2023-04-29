#include<stdio.h>
int main()
{
  int a[10],n,i;
  printf("enter n=");
  scanf("%d",&n);
  for(i=0; i<n; i++)
        {
  a[0]=0;
  a[1]=1;
  for(i=2;i<n;i++)
  {
     a[i]=a[i-1]+a[i-2];
  }
  for(i=0;i<n;i++)
  {
  printf("Fib(%d) = %d\n",i,a[i]);
}
}}
