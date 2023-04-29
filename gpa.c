#include<stdio.h>
int main()
{
    float x;
    int marks;
    printf("enter the x:");
    scanf("%f",&x);
    marks=round(x);
    if(marks>=80)
    {
        printf("%f the grade is A+",marks);
    }
    else if(marks>=75 && marks<=79)
    {
        printf("%d the grade is A",marks);
    }
    else if(marks>=70 && marks<=74)
    {
        printf("%d the grade is A-",marks);
    }
    else if(marks>=65 && marks<=69)
    {
        printf("%d the grade is B+",marks);
    }
    else if(marks>=60 && marks<=64)
    {
        printf("%d the grade is B",marks);
    }
    else if(marks>=55 && marks<=59)
    {
        printf("%d the grade is C",marks);
    }
    else
    {
        printf("%d the grade is F",marks);
    }
}
