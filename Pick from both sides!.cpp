/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const int mx = 1e7+123;
 int a[mx];

int main()
{
     optimize();
      int t,i,n,k,j,sum=0,rep=0;
     cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
    }
    cin>>k;
for(i=0;i<k;i++){
     sum=sum+a[i];
}
rep=sum;
for(j=0;j<k;j++){
          sum=sum-a[k-1-j];
          sum=sum+a[n-1-j];
          rep=max(rep,sum);
     }
cout<<rep<<endl;
}
/// ALHAMDULILLAH




