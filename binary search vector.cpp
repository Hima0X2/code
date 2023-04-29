#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,search_item,a[100000],r,l,mid,s=0;
     cin>>n;
      vector<int> v;
     for(int i=0;i<n;i++){
          cin>>a[i];
          v.push_back(a[i]);
     }
     cin>>search_item;
   cout<<binary_search(v.begin(),v.end(),search_item)<<endl;
}

