#include<bits/stdc++.h>
using namespace std;
#define size 8
int main()
{
     int n;
     cin>>n;
     bitset<size> b;
     b=n;
     b.flip();
    cout << b.to_ullong() << endl;
}
