#include<stdio.h>
int gcd(int a, int b)
{
     //10,9-->1
   int gcd = 0;
   int smaller;
   if(a<b){
        smaller=a;//10
   }
   else{
     smaller=b;//15
   }
   for(int i=smaller; i>= 2; i--)
   {
       if(a%i==0 && b%i==0){
           return i;
       }
   }
   return 1;
}

int main()
{
     int a,b;
     scanf("%d%d",&a,&b);
     int p=gcd(a,b);
     printf("GCD= %d",p);
	return 0;
}


