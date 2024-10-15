class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroes = 0;
        int ones = 0;
        int two = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 0) zeroes++;
            else if(nums[i] == 1) ones++;
            else two++;
        }

        for(int i=0; i<nums.size(); i++) {
            while(zeroes--) {
                nums[i]=0;
                i++;
            }
            while(ones--) {
                nums[i]=1;
                i++;
            }
            while(two--) {
                nums[i]=2;
                i++;
            }
        }
    }
};