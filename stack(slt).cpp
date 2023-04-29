#include<bits/stdc++.h>
using namespace std;
int main()
{
     stack<int> st;
     st.push(1);
      st.push(2);
       st.push(1);
        st.push(4);
         st.push(3);
          cout<<st.size()<<endl;
          while(!st.empty()){
         cout<<st.top()<<" ";
         st.pop();
          }
          cout<<endl;
}
