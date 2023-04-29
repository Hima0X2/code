#include<bits/stdc++.h>
using namespace std;
int solve(long long int a,long long int b){
  if(b==a){
     return a;
  }
  else{
       if(b>a){
     b-=a;
       }
       else{
     a-=b;}
  }
  return solve(a,b);
}
int main()
{
   long long int a,b,d;
 cin>>a>>b;
 d=solve(a,b);
 cout<<d<<endl;
}

