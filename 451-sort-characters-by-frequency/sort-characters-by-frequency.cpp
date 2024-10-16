class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> um;
        int n = s.size();
        vector<string> freq(n+1, "");

        for(int i=0; i<n; i++) {
            um[s[i]]++;
        }
        for(auto &it : um) {
            freq[it.second].append(it.second, it.first);
        }

        string tt = "";
        for(int i=n; i>0; i--) {
            if(!freq[i].empty()) {
                tt.append(freq[i]);
            }
        }

        return tt;
    }
};

// class Solution {
// public:
//     string frequencySort(string s) {
//         unordered_map<char,int> freq;
//         vector<string> bucket(s.size()+1, "");
//         string res;
        
//         //count frequency of each character
//         for(char c:s) freq[c]++;
//         //put character into frequency bucket
//         for(auto& it:freq) {
//             int n = it.second;
//             char c = it.first;
//             bucket[n].append(n, c);
//         }
//         //form descending sorted string
//         for(int i=s.size(); i>0; i--) {
//             if(!bucket[i].empty())
//                 res.append(bucket[i]);
//         }
//         return res;
//     }
// };