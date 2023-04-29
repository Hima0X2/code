bool Prime(long long int n){
     int i;
     if(n==1){
         return 0;
     }
     for(i=2;i<n;i++){
          if(n%i==0){
               return 0;
          }
     }
     return 1;
}
vector<int> Solution::primesum(int n) {
vector<int> s;
int i;
for(i=2;i<n;i++){
    if(Prime(i)&&Prime(n-i)){
    s.push_back(i);
    s.push_back(n-i);
    break;
    }
}
return s;
}

