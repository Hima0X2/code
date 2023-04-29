#include<stdio.h>
int gcd(int a,int b){
     if(a==0){
          return b;
     }
    return gcd(b % a, a);//10 15  5 10 10%5=0 10
}
int main(){
     int a,b;
     scanf("%d%d",&a,&b);
     int p=gcd(a,b);
     printf("GCD= %d",p);
	return 0;
}

