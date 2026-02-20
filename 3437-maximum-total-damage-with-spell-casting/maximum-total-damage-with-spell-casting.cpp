class Solution {
public:
    long long maximumTotalDamage(vector<int>& power) {
        unordered_map<int,long long >sum;
        for(int p:power) sum[p]+=p;
        vector<int>vals;
        for(auto &it:sum) vals.push_back(it.first);
        sort(vals.begin(),vals.end());
        int n=vals.size();
        vector<long long >dp(n,0);
        for(int i=0;i<n;i++){
            long long take=sum[vals[i]];
            int j=i-1;
            while(j>=0 && vals[i]-vals[j]<3) j--;
            if (j >= 0) take += dp[j];

            long long skip = (i > 0) ? dp[i - 1] : 0;
            dp[i] = max(take, skip);
        }
                return dp.back();
    }
};