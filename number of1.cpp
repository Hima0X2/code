#include <iostream>
using namespace std;
int countSetBits(int x)
{
	int count = 0;
	while (x)
	{
		x &= (x-1);
		count++;
	}
	return count;
}
int main()
{
	int x;
	cin>>x;
	cout<<countSetBits(x)<<endl;
}

