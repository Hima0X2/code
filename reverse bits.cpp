#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,rev=0;
     cin>>n;
     while(n>0){
          rev<<=1;
          if(n&1){#include <bits/stdc++.h>

using namespace std;

// function to reverse bits of a number
unsigned int reverseBits(unsigned int n)
{
    unsigned int rev = 0;

    // traversing bits of 'n' from the right
    while (n > 0)
    {
        // bitwise left shift
        // 'rev' by 1
        rev <<= 1;

        // if current bit is '1'
        if (n & 1 == 1)
            rev ^= 1;

        // bitwise right shift
        // 'n' by 1
        n >>= 1;

    }

    // required number
    return rev;
}

// Driver program to test above
int main()
{
    unsigned int n = 11;
    cout << reverseBits(n);
    return 0;
}
               rev=rev^1;
          }
          n>>=1;
     }
     cout<<rev<<endl;
}
