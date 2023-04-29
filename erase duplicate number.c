#include<stdio.h>
int main()
{
     int a[100],i,k,j,n,temp;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(k=0,j=1;j<n;k++,j++)
     {
          if(a[k]>a[j])
          {
               temp=a[j];
               a[j]=a[k];
                a[k]=temp;
                printf("%d\n",a[k]);
          }
          else if(a[k]<a[j])
          {
                printf("%d\n",a[j]);
          }
     }
     return 0;
}
