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
     long long int t,i,n,j,a[100][100],b[100][100],cal;
     cin>>n;
     bool ok=0,pk;
     for(i=0;i<n;i++){
          for(j=0;j<n;j++){
           cin>>a[i][j];
          }
     }
     memset(b, -1, sizeof b);
     for(i=0;i<n;i++){
          for(j=0;j<n;j++){
           if(a[i][j]==0){
                    if(i>0){
              a[i][0]=0;
                    }
              a[0][j]=0;
           }
          }
     }
      for(i=n-1;i>=0;i--){
     for(j=n-1;j>=0;j--){
           if(a[i][0]==0||a[0][j]==0){
             b[i][j]=0;
           }
          }
      }
       for(i=0;i<n;i++){
          for(j=0;j<n;j++){
          cout<<b[i][j];
          }
          cout<<endl;
     }
      //if (a[i][0] == 0) n = 0;
}
/// ALHAMDULILLAH




