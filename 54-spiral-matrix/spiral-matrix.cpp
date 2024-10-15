class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> answer;
        
        int n = mat.size();
        if (n == 0) return answer;
        int m = mat[0].size();

        int start_row = 0, start_col = 0, end_row = n-1, end_col = m-1;
        int t = n * m;
        int k = 0;

        while(k < t) {
            for(int i=start_col; i<=end_col; i++) {
                answer.push_back(mat[start_row][i]);
                k++;
                if(k == t) break;
            }
            start_row++;
            if(k == t) break;

            for(int i=start_row; i<=end_row; i++) {
                answer.push_back(mat[i][end_col]);
                k++;
                if(k == t) break;
            }
            end_col--;
            if(k == t) break;

            for(int i=end_col; i>=start_col; i--) {
                answer.push_back(mat[end_row][i]);
                k++;
                if(k == t) break;
            }
            end_row--;
            if(k == t) break;

            for(int i=end_row; i>=start_row; i--) {
                answer.push_back(mat[i][start_col]);
                k++;
                if(k == t) break;
            }
            start_col++;
            if(k == t) break;
        }

        return answer;
    }
};