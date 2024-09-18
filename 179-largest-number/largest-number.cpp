bool compare(string a,string b){
    return a+b > b+a;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> m;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            string s = to_string(nums[i]);
            m.push_back(s);
        }

        sort(m.begin(),m.end(),compare);
        string s = "";
        for(string it : m) {
            s = s + it;
        }

        return s[0]=='0'? "0" : s;
    }
};