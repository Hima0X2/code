#include<stdio.h>
int main()
{
  int a,c,l;
  scanf("%d",&a);
  c=a/10;
  l=a-(c*10);
  if(l==0||l==2||l==4||l==8)
  {printf("number is even\n");}
  else
  {printf("number is odd\n");}
  return 0;
}
