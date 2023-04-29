/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int solve(int n) {
     n++;
    int powerOf2 = 2;
    int cnt = n / 2;
    while (powerOf2 <= n) {
        int totalPairs = n / powerOf2;
        cnt += (totalPairs / 2) * powerOf2;
        cnt += (totalPairs & 1) ? (n % powerOf2) : 0;
        powerOf2 <<= 1;
    }

     return (cnt% 1000000007);
}
int main()
{
     optimize();
     long long int tothepower=0,i,n;
     cin>>n;
   cout<<solve(n)<<endl;
}
/// ALHAMDULILLAH



