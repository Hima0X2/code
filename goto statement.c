#include<stdio.h>
int main()
{
     int i=1;
     print:
          printf("%d\n",i);
          ++i;
          if(i<5) goto print;
     return 0;
}
