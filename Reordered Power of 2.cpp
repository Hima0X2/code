/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
bool check(long long int n,long long int p){

}
int main()
{
    optimize();
    long long int i,r=1;
    vector<long long int> v[1000];
    while(r<=10000)
    {
        long long int digit=log2(r)+1;
        v[digit].push_back(r);
        r=r*2;
    }
    cin>>n;
    if(n<=0){
     cout<<0<<endl;
    }
    else{
     long long int p=log2(n)+1;

    }
}
/// ALHAMDULILLAH




