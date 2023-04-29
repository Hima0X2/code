#include<stdio.h>
int main()
{
    char a;
    printf("enter the alphabet",a);
    scanf("%c",&a);
    if((a='a'||a='e'||a='i'||a='o'||a='u')||(a='A'||a='E'||a='I'||a='O'||a='U'))
    {
        printf("%c vowel";a);
    }
    else
    {
        printf("%c consonent",a);
    }getch();
    return 0;
}
