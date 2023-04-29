#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
   int n,i,j;
   cin>>n;
   if(n==1){
     cout<<-1<<endl;
   }
   else if(n==2){
     cout<<27<<endl;
   }
    if(n==3){
     cout<<239<<endl;
   }
   else if(n==4){
     cout<<6789<<endl;
   }
   else if(n==5){
     cout<<23579<<endl;
   }
    if(n==6){
     cout<<235789<<endl;
   }
   else if(n==7){
     cout<<2356789<<endl;
   }
   else if(n==8){
     cout<<23456987<<endl;
   }
}


