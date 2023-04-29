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
     string s,t;
     getline(cin,s);
     long long i =0,j = s.size()-1;
     while(i<j){
    if(!isalnum(A[i])){
        i++;
        continue;
    }
    if(!isalnum(A[j])){//salnum ASCII value kina check kre
        j--;
        continue;
    }

    if(tolower(A[i]) != tolower(A[j])){
        return 0;
    }
    i++;
    j--;
}

return 1;
}
}
/// ALHAMDULILLAH



