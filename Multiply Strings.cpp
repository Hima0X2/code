/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int i,n,j,c=0,d=0;
     string s,t;
     cin>>s>>t;
      if(s=="0"||t=="0"){
            cout<<"0"<<endl;
            return 0;
        }
        if(s[0]=='-'&&t[0]=='-'){
c++;d++;
}
        else if(s[0]=='-'){
        c++;
     }
     else if(t[0]=='-'){
d++;
     }
     vector<int> result(s.size() +t.size(), 0);//every elements is zero
     // build the number by multiplying one digit at the time
     for(i=s.size()-1;i>=c;i--){
          for(j=t.size()-1;j>=d;j--){
           result[i+j+1]=result[i+j+1]+(s[i]-'0')*(t[j]-'0');
           result[i+j]=result[i+j]+(result[i+j+1]/10);
           result[i+j+1]=result[i+j+1]%10;
          }
     }
//skip leading zeros
i=0;
while(result[i]==0 &&i<result.size()){
i++;
}
string p="";
if(s[0]=='-'&&t[0]!='-'){
        p.push_back('-');
     }
     else if(t[0]=='-'&&s[0]!='-'){
p.push_back('-');
     }
while(i<result.size()){
     p.push_back(result[i]+'0');
     i++;
}
cout<<p<<endl;
}
/// ALHAMDULILLAH




