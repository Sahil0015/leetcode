class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end());
        
        int n = intervals.size();

        vector<vector<int>> merged;

        for (const auto &iv : intervals) {
            if (merged.empty() || merged.back()[1] < iv[0]) {
                merged.push_back(iv);
            } else {
                merged.back()[1] = max(merged.back()[1], iv[1]);
            }
        }

        return merged;
    }
};