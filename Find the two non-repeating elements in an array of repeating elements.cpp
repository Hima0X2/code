/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx],b[mx];

int main()
{
     optimize();
     long long int t,i,n,j=0,rev,sev;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
          if(a[i]&1){
               b[j]=a[i];
               j++;
          }
     }
     rev=a[0];
     sev=a[0];
    for(i=1;i<n;i++){
      rev=rev^a[i];
      sev=sev^a[i];
    }
 for(i=1;i<j;i++){
      rev=rev^a[i];
    }
    sev=sev^rev;
    cout<<sev<<" "<<rev<<endl;
}
/// ALHAMDULILLAH



