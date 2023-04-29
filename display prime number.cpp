#include<bits/stdc++.h>
using namespace std;
int prime(int n){
bool k=true;
int j;
for(j=2;j<=(n/2);j++){
     if(n%j==0){
         k=false;
          break;
     }
}
return k;
}
int main()
{
     bool d;
     int n,i;
     cin>>n;
     for(i=2;i<=n;i++){
          d=prime(i);
          if(d==true){
               cout<<i<<" ";
          }
     }
}

