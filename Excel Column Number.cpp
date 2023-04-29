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
     class Solution {
public:
    int titleToNumber(string col) {
        long long int n=col.size(),i,sum=0,j=0;
         for(i=n-1;i>=0;i--){
             sum=sum+pow(26,j)*(col[i]-'A'+1);
                 j++;
         }
       // sum=sum+(col[n-1]-'A'+1);
        return sum;
    }
};
}
/// ALHAMDULILLAH



