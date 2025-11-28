class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        if (n == 0) return;
        int m = mat[0].size();

        vector<char> rowHasZero(n, 0);
        vector<char> colHasZero(m, 0);

        // First pass: mark rows and columns that should be zeroed
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (mat[i][j] == 0) {
                    rowHasZero[i] = 1;
                    colHasZero[j] = 1;
                }

        // Second pass: zero marked rows and columns
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (rowHasZero[i] || colHasZero[j])
                    mat[i][j] = 0;
    }
};