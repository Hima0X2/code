#include<bits/stdc++.h>
using namespace std;
int main()
{
     multiset<int> s;
      multiset<int>:: iterator it;
     s.insert(1);
     s.insert(4);
     s.insert(1);
     s.insert(3);
     s.insert(1);
     s.insert(4);
     s.insert(2);
     s.insert(4);
     for(it=s.begin();it!=s.end();it++){
          cout<<*it<<" ";
     }
     cout<<endl;
}
