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
long long int a[mx];

int main()
{
     optimize();
     long long int j,i,n,cnt=0,ans=0,mod=1000000007;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
    for(i=0;i<32;i++)
    {
        cnt=0;

        for(j=0;j<n;j++)
        {
            if(a[j]&(1<<i))
                cnt++;
        }
        ans=(ans+(cnt*(n-cnt)*2))%mod;
    }

    cout<<ans<<endl;
}
/// ALHAMDULILLAH



