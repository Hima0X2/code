#include <iostream>
using namespace std;
int main()
{
	int x,pos;
	cin>>x>>pos;
	if(x&(1<<pos)){//(1<<pos)= 1 koy no pos e ashe ta
          cout<<"True\n";//value =1
	}
	else{
          cout<<"False\n";//value =0
	}
}
//1<<3== 0100
//1<<4== 1000


