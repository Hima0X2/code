#include<stdio.h>
int main()
{
    float time;
    printf("enter the value of time=");
    scanf("%f",&time);
    if(time>=0 && time<=10)
    {
        printf("good morning samanta",time);
    }
    else if(time>=11 && time<=15)
    {
        printf("good noon samanta",time);
    }
    else if(time>=16 && time<=18)
    {
        printf("good afternoon samanta",time);
    }
    else if(time>=19 && time<=21)
    {
        printf("good night samanta",time);
    }
    else if(time>=22 && time<=24)
    {
        printf("its sleepy time  sweet dream samanta",time);
    }

}
