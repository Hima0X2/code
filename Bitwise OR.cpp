#include<bits/stdc++.h>
using namespace std;
#define size 8
int main()
{
     long long int n,c=1;
     cin>>n;
     bitset<size> b;
     b=n;
     b.flip();
     b=b|c;
    cout << b.to_ullong() << endl;
}

