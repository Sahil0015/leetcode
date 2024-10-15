class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int majority_element = nums[0];
        for(int i=0; i<nums.size(); i++) {
            if(count == 0) {
                majority_element = nums[i];
                count++;
            }
            else if(nums[i] == majority_element) count++;
            else count--;
        }

        return majority_element;
    }
};