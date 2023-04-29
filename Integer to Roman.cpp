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
     long long int t,i,n;
     string s="";
       cin>>n;
       while(n>=1000){
          s=s+'M';
          n=n-1000;
       }
       if(n>=900){
          s=s+"CM";
          n=n-900;
       }
       if(n>=500){
          s=s+'D';
          n=n-500;
       }
       if(n>=400){
          s=s+"CD";
          n=n-400;
       }
       while(n>=100){
          s=s+'C';
          n=n-100;
       }
       if(n>=90){
          s=s+"XC";
          n=n-90;
       }
       if(n>=50){
          s=s+'L';
          n=n-50;
       }
       if(n>=40){
          s=s+"XL";
          n=n-40;
       }
      while(n>=10){
          s=s+'X';
          n=n-10;
       }
       if(n>=9){
          s=s+"IX";
          n=n-9;
       }
       if(n>=5){
          s=s+'V';
          n=n-5;
       }
       if(n>=4){
          s=s+"IV";
          n=n-4;
       }
       while(n--){
          s=s+"I";
       }
       cout<<s<<endl;
}
/// ALHAMDULILLAH




