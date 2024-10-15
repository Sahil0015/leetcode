class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > 0) positive.push_back(nums[i]);
            else negative.push_back(nums[i]);
        }

        int m = 0;
        int n = 0;
        for(int i=0; i<nums.size(); i++) {
            if(i % 2 == 0) {
                nums[i] = positive[m];
                m++;
            }
            else {
                nums[i] = negative[n];
                n++;
            }
        }

        return nums;
    }
};