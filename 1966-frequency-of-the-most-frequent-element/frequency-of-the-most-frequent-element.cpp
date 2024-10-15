class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int maxFrequency = 0;
        long currSum = 0;

        sort(nums.begin(), nums.end());

        for(int left = 0, right = 0; right < nums.size(); right++) {
            currSum += nums[right];

            long Sum = nums[right];
            while(currSum + k < Sum * (right - left + 1)) {
                currSum -= nums[left];
                left++;
            }

            maxFrequency = max(maxFrequency, right - left + 1);
        }

        return maxFrequency;
    }
};