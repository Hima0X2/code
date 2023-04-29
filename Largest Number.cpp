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
bool check(int a,int b){
     string s1=to_string(a);
     string s2=to_string(b);
      if(s1+s2>s2+s1){
         return 0;
      }
      else{
         return 1;
      }
}
int main()
{
     optimize();
     long long int j,t,i,n;
     cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
    }
     for(i=0;i<n;i++){
     for(j=i+1;j<n;j++){// 5 34
               if(check(a[i],a[j])){
                    swap(a[i],a[j]);
          }
     }
    }
    string s;
    for(i=0;i<n;i++){
     s=s+to_string(a[i]);
    }
    cout<<s<<endl;
}
/// ALHAMDULILLAH



