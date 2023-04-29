#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i,a[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long int> v;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                v.push_back(a[i]);
            }
        }
        for(i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                v.push_back(a[i]);
            }
        }
        for(i=0; i<n; i++)
        {
           cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
