class Solution {
public:
    bool check(vector<int>& nums) {
        bool flag = false;
        int dip = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]>nums[i+1]) dip++;
        }
        if(nums[0] >= nums[nums.size()-1]) flag = !flag;
        if((flag && dip<2 && dip>0) || (dip==0)) return true;
        return false;
    }
};