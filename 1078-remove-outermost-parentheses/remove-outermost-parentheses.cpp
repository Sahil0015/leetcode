class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance = 0;
        int start_index = 0;
        int n = s.size();
        string t = "";

        for(int i=0; i<n; i++) {
            if(s[i] == '(') {
                if(balance == 0) {
                    start_index = i+1;
                }
                balance++;
            }
            else if(s[i] == ')') {
                if(balance == 1) {
                    //if(start_index >= i-1) continue;
                    //cout<<t<<" "<<start_index<<endl;
                    t = t + s.substr(start_index, i-start_index);
                    //cout<<t<<" "<<i-1<<endl;
                }
                balance--;
            }
        }

        return t;
    }
};