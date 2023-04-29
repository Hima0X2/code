/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,i,n,c0,c1,j,sum=0;
     cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
    }
   for(i=0;i<31;i++){
     c0=0,c1=0;
      for(j=0;j<n;j++){
          if(a[j]&(1<<i)){
               c1++;
          }
          else{
             c0++;
          }
     }
     long long int p=c0*c1;
     sum=sum+(1<<i)*p;
    }
    long long int x=1e9+7;
    cout<<sum%x<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



