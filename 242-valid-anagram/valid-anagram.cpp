class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> um;

        int n = s.size();
        for(int i=0; i<n; i++) {
            um[s[i]]++;
        }
        for(int i=0; i<t.size(); i++) {
            if(um.find(t[i]) == um.end() or um[t[i]] <= 0) return false;
            else if(um[t[i]] > 0) um[t[i]]--;
        }
        
        for(auto const it : um) {
            if(it.second > 0) return false;
        }
        return true;
    }
};