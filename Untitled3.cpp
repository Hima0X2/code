#include<bits/stdc++.h>
using namespace std;
int fun(int a,int b,int c){
     if(a+b<c){
          return a;
     }
}
int main()
{
     int a,b,c;
     cin>>a>>b>>c;
     cout<<fun(a,b,c)<<endl;
}
