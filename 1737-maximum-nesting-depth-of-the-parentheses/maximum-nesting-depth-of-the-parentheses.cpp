//#include <algorithm>

class Solution {
public:
    int maxDepth(string s) {
        int balance = 0;
        int max_balance = 0;
        int n = s.size();

        for(int i=0; i<n; i++) {
            if(s[i] == '(') {
                balance++;
                max_balance = std::max(max_balance, balance);
            }
            else if(s[i] == ')')
                balance--;
        }

            return max_balance;
        }
    };
