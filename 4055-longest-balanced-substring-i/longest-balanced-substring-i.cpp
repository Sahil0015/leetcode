class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int cnt[26]={0};
            string st=s;
            
            for(int j=i;j<n;j++){
                cnt[s[j]-'a']++;
                int maxcount=0;
                int mincount=INT_MAX;
                for(int c=0;c<26;c++){
                    if(cnt[c]>0){
                        mincount = min(mincount, cnt[c]);
                        maxcount = max(maxcount, cnt[c]);
                    }
                }
                if(mincount==INT_MAX) continue;
                if (mincount == maxcount) {
                    ans = max(ans, j - i + 1);
                }
            }
            
        }
        return ans;
    }
};
