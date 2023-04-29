/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    optimize();
    long long int t,i,n,integer=0;
    string s;
    cin>>s;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='M')
        {
            integer=integer+1000;
        }
        if(s[i]=='D')
        {
            integer=integer+500;
        }
        if(s[i]=='C')
        {
            if(s[i+1]=='D')
            {
                integer=integer+400;
                i++;
            }
            else if(s[i+1]=='M')
            {
                integer=integer+900;
                i++;
            }
            else
            {
                integer=integer+100;
            }
        }
        if(s[i]=='L')
        {
            integer=integer+50;
        }
        if(s[i]=='X')
        {
            if(s[i+1]=='C')
            {
                integer=integer+90;
                i++;
            }
            else if(s[i+1]=='L')
            {
                integer=integer+40;
                i++;
            }
            else
            {
                integer=integer+10;
            }
        }
        if(s[i]=='V')
        {
            integer=integer+5;
        }
        if(s[i]=='I')
        {
            if(s[i+1]=='X')
            {
                integer=integer+9;
                i++;
            }
            else  if(s[i+1]=='V')
            {
                integer=integer+4;
                i++;
            }
            else
            {
                integer=integer+1;
            }
        }
    }
    cout<<integer<<endl;
}
/// ALHAMDULILLAH




