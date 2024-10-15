class Solution {
public:
    string largestOddNumber(string num) {
        string s = "";
        int n = num.size();

        int i;
        for(i=n-1; i>=0; i--) {
            int d = num[i] - '0';
            cout<<d<<endl;
            if(d % 2 != 0) return num.substr(0, i+1);
        }

        return "";
    }
};