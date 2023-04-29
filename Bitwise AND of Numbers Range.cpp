#include<bits/stdc++.h>
using namespace std;
int main()
{
    int left,right,t=0,j;
     cin>>left>>right;
   while(left!=right){
     left=left>>1;
     right=right>>1;
     t++;
   }
    cout<<(right>>t)<<endl;
}
