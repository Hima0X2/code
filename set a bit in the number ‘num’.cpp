#include<bits/stdc++.h>
using namespace std;
#define size 8
int main()
{
     long long int n,l,i,pos;
     cin>>n>>pos;
     bitset<size> b;
     b=n;
     //cout<<b[pos]<<endl;
     if(!b[pos]){
          b[pos].flip();
     }
     cout<<b.to_ullong() << endl;
}
