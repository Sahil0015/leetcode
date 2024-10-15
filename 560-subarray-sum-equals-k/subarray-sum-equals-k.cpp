class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> um;
        int prefixSum = 0;
        int n = nums.size();
        um[0] = 1;

        for(int i=0; i<n; i++) {
            prefixSum += nums[i];

            int remove = prefixSum - k;

            count += um[remove];

            um[prefixSum] += 1;
        }

        return count;
    }
};