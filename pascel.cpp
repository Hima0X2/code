/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,j;
     long long int a[100][100];
     a[1][1]=1;
     cin>>n;
     for(i=2;i<=n;i++){
          for(j=1;j<=i;j++){
               if(j==i||j==1){
                    a[i][j]=1;
               }
               else{
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
               }
          }
     }
     for(i=1;i<=n;i++){
          for(j=1;j<=i;j++){
               cout<<a[i][j]<<" ";
          }
          cout<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




