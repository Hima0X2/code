#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a[10]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
      string b[10]={"Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
      long long int i,n;
      cin>>n;
      if(n<=9){
          cout<<a[n-1]<<endl;
      }
      else if(n==10){
          cout<<"Ten\n";
      }
       else if(n==11){
          cout<<"Eleven\n";
      }
       else if(n==12){
          cout<<"Twelve\n";
      }
       else if(n==13){
          cout<<"Thirteen\n";
      }
       else if(n==14){
          cout<<"Fourteen\n";
      }
       else if(n==15){
          cout<<"Fifteen\n";
      }
       else if(n==16){
          cout<<"Sixteen\n";
      }
       else if(n==17){
          cout<<"Seventeen\n";
      }
       else if(n==18){
          cout<<"Eighteen\n";
      }
       else if(n==19){
          cout<<"Nineteen\n";
      }
       else if(n==20){
          cout<<"Twenty\n";
      }
      else if(n>=20&&n<=99){
          cout<<b[(n/10)-1]<<" "<<a[(n%10)-1]<<endl;
      }

}
