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
     long long int a[100][100],b[100][100],i,j,n;
     cin>>n;
     for(i=0;i<n;i++){
          for(j=0;j<n;j++){
          cin>>a[i][j];
          }
     }
     for(i=0;i<n;i++){
          for(j=0;j<n;j++){
               b[i][j]=a[j][i];
          }
     }
     for(i=0;i<n;i++){
                int k=0;
       for(j=n-1;j>=0;j--){
                a[i][j]=b[i][k];
                k++;
              }
     }
      for(i=0;i<n;i++){
          for(j=0;j<n;j++){
               cout<<a[i][j]<<" ";
          }
          cout<<endl;
     }
}
/// ALHAMDULILLAH




