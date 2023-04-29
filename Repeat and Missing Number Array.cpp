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
     int t,i,n,m,p;
     cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
    }
    vector<int> v(n);
    for(i=0;i<n;i++){
          if(v[a[i]]==1){
               m=a[i];
          }
     v[a[i]]=1;
    }
    for(i=1;i<=n;i++){
       if(v[i]!=1){
          p=i;
          break;
       }
    }
    vector<int> vc;
    vc.push_back(m);
    vc.push_back(p);
    cout<<vc[0]<<" ";
    cout<<vc[1]<<endl;
}
/// ALHAMDULILLAH




