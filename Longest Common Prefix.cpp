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
     long long int j,i,n;
     cin>>n;
     vector<string> v;
     string s[1000],t="";
     for(i=0;i<n;i++){
      cin>>s[i];
     }
     string mx=s[0];
     bool ok=true;
    // cout<<mx<<endl;
for(i=1;i<n;i++){
     for(j=0;j<mx.size();j++){
          if(s[i][j]!=mx[j]){
             mx=t;
             break;
          }
          else{
               t=t+s[i][j];
               ok=false;
          }
     }
      t="";
}
if(ok){
     cout<<""<<endl;
}
else{
cout<<mx<<endl;
}
}
/// ALHAMDULILLAH



