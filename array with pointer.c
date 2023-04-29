#include<stdio.h>
void display(int array[20])
{
     int i,*p;
       for(i=0;i<5;i++)
     {
           p=&array[i];
          printf("%d\n",*p);
     }
}
int main()
{
     int array[20],i;
     for(i=0;i<5;i++)
     {
          scanf("%d",&array[i]);
     }
     display(array);
     return 0;
}
