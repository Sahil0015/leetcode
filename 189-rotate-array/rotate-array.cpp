class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k == 0 or k % nums.size() == 0) return;

        int len = nums.size();
        k = k % len;
        reverse(nums.begin(), nums.begin()+len-k);
        reverse(nums.begin()+len-k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};