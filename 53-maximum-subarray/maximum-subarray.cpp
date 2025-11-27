class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int neg = INT_MIN;
        int maxsum = 0;
        for(int i=0; i<n; i++) {
            if(nums[i]<=0 && nums[i]>neg) neg = nums[i];
            sum+=nums[i];
            if(sum < 0) sum=0;
            else 
                if(maxsum < sum) maxsum = sum;
            
        }

        if(maxsum) return maxsum;
        return neg;
    }
};