#include<stdio.h>
int main()
{
    float c,f;
    printf("enter centigrade:");
    scang("%f",&c);
    f=(c*1.8)+32;
    printf("enter Fahrenheit %.2f",f);
    return 0;

}
