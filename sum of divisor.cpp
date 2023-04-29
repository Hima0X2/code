#include<bits/stdc++.h>
using namespace std;
int main()
{
     int q,v,i,j,sum=0;
     cin>>q;
     for(i=0;i<q;i++){
          cin>>v;
          for(j=1;j<v;j++)
          {
            if(v%j==0)
               {
                    sum=sum+j;
               }
          }
          cout<<sum<<endl;
          sum=0;
     }

}
