typedef long long LL;
#define MOD 1000000007ll
int Solution::cntBits(vector<int> &A) {
    int n = A.size();
    int sum = 0;
    
    for (auto i = 0; i<31; ++i)
    {
        LL count = 0;   
        for (auto j = 0; j<n; ++j)
            if(A[j] & (1<<i))
                ++count;        
        sum += (count*((LL)n-count)*2)%MOD; 
	 if(sum>=MOD)    
	 sum -= MOD;
    }
    return sum;
}
