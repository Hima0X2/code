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
     int t,i,n;
     cin>>n;
     vector<int> v;
     map<int,int> mp;
     for(i=0;i<n;i++){
          cin>>a[i];
          if(a[i]>0){
                    if(mp[a[i]]!=2){
                    v.push_back(a[i]);
                    }
               mp[a[i]]=2;
          }
     }
     sort(v.begin(),v.end());
      for(i=0;i<v.size();i++){
           cout<<v[i]<<" ";
      }
      cout<<endl;
     for(i=0;i<v.size();i++){
        if(v[i]!=i+1){
          cout<<i+1<<endl;
        return 0;
 }
     }
     cout<<i+1<<endl;
}
/// ALHAMDULILLAH



