/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    long long int j,t,i,n,c=0,p;
    cin>>n;
    long long int a[2*n-1][2*n-1];
    memset(a,0,sizeof(a));
    t=n;
    a[n-1][n-1]=1;
    n=2*n-1;
    int start=0,endp=n-1;
    while(t!=0){
    for(i=start; i<=endp; i++)
    {
        for(j=start; j<=endp; j++)
        {
          if(i==start||j==start||i==endp||j==endp){
            a[i][j]=t;
          }
        }
    }
    start++;
    endp--;
    t--;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
/// ALHAMDULILLAH



