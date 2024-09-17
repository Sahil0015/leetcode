class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> um;
        vector<string> ans;
        int n = s1.size();
        int m = s2.size();

        string word = "";
        for(int i=0; i<=n; i++) {
            if(i == n || s1[i] == ' ') {
                um[word]++;
                word = "";
            }
            else word = word + s1[i];
        }

        for(int i=0; i<=m; i++) {
            if(i == m || s2[i] == ' ') {
                um[word]++;
                word = "";
            }
            else word = word + s2[i];
        }

        for(const auto &it : um) {
            if(it.second == 1) {
                ans.push_back(it.first);
            }
        }

        return ans;
    }
};