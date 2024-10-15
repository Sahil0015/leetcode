class Solution {
public:
    string reverseWords(string s) {
        int k = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] != ' ') {
                s[k] = s[i];
                k++;
            }
            else if(i > 0 && s[i] == ' ' && s[i-1] != ' ') {
                s[k] = s[i];
                k++;
            }
        }
        s = s.substr(0, k);
        if(s[s.size()-1] == ' ') s = s.substr(0, k-1);

        int n = s.size();
        reverse(s.begin(), s.end());

        int start = 0;
        for(int i=0; i<=n; i++) {
            if(i == n) {
                reverse(s.begin()+start, s.end());
            }
            else if(s[i] == ' ') {
                reverse(s.begin()+start, s.begin()+i);
                start = i+1;
            }
        }

        return s;
    }
};