#include<stdio.h>
int main()
{
     int ara[10]={4,5,6,6,7,7,8,8,99,10};
     int i,marks,count;
     for(marks=1;marks<100;marks++){
count=0;
          for(i=0;i<10;i++){
               if(marks==ara[i]){
                    count++;
               }
          }
          printf("marks=%d count=%d\n",marks,count);
     }

}
