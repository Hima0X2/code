#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    bool a[n+1];
    for(i=2; i<=n; i=i+1)
    {
        a[i]=true;
    }
    for(i=2; i*i<=n; i=i+1)
    {
        if(a[i]==true)
        {
            for(j=i*i; j<=n; j=j+i)
            {
                a[j]=false;
            }
        }
    }
    for(i=2; i<=n; i=i+1)
    {
        if(a[i]==true)
            cout<<i<<" ";
    }
    return 0;

}
