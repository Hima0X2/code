#include<bits/stdc++.h>
using namespace std;
int main()
{
     deque<int> dq;
     dq.push_front(1);
     dq.push_front(3);
     dq.push_front(2);
     dq.push_front(5);
     dq.push_back(2);
     dq.push_back(4);
     cout<<dq.front()<<" "<< dq.back()<<endl;
     dq.pop_front();
     cout<<dq.front()<<" "<< dq.back()<<endl;
     dq.pop_back();
}
