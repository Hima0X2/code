#include<stdio.h>
int main()
{
     int key=5;
     int ara[9]={7,0,1,3,2,6,5,8,9},i;
     int found=0;
     for(i=0;i<9;i++)
     {
          if(key==ara[i])
               printf("found in array");
          found=1;
          break;
     }
     if(found==0)
          printf("not found");
     return 0;
}
