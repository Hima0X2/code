int Solution::repeatedNumber(const vector<int> &n) {
        vector <int> v(n.size()+1,0);
        long long int i,x=-1;
        for(i=0;i<n.size();i++){
            if(v[n[i]]==1){
                return  n[i];
            }
             v[n[i]]=1;
        }
        return x;
}
