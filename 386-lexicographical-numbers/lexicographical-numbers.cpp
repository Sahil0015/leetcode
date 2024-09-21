class Solution {
    
    void f(int i, int n, vector<int>& ans) {
        if(i > n) return;
        ans.push_back(i);
        f(i*10, n, ans);
        if (i % 10 != 9) f(i+1, n, ans);
    }

public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        //int i = 1;
        //for(int i=1; i<10; i++) {
            f(1, n, ans);
        //}

        return ans;
    }
};