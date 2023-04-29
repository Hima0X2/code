#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   int n,i;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
     cin>>a[i];
   }
    vector<int>v[16];
    bitset <16> b;
  int size = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        b = a[i];
        int bits = b.count();
        v[bits].push_back(a[i]);
    }
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout << v[i][j] << " ";
        }
    }

}
