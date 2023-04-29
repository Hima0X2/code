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
     long long int t,i,n,j;
     cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
    }
    for(i=0;i<(1<<n);i++){
     for(j=0;j<n;j++){
          if(i&(1<<j)){
               cout<<a[j]<<" ";
          }
     }
      cout<<endl;
    }
}
/// ALHAMDULILLAH



