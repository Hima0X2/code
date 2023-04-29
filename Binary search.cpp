#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,search_item,a[100000],r,l,mid,s=0;
     cin>>n;
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     cin>>search_item;
     l=0;r=n-1;
     while(l<=r){
          mid=(l+r)/2;
          if(a[mid]==search_item)
          {
               cout<<mid<<endl;
               s=1;
               break;
          }
          else if(a[mid]<search_item){
               l=mid+1;
          }
          else{
               r=mid-1;
          }
     }
     if(s==0){
          cout<<"Not found"<<endl;
     }
}
