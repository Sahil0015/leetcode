class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        if (n == 0) return;
        int m = mat[0].size();
        vector<vector<int>> zeroes;

        for(int i=0; i<n ;i++) {
            vector<int> row;
            row.push_back(i);
            for(int j=0; j<m; j++)
                if(mat[i][j] == 0)
                    row.push_back(j);
            zeroes.push_back(row);
        }

        for(int i=0; i<n ;i++) {
            if(zeroes[i].size() == 1) continue;
            for(int j=1; j<zeroes[i].size(); j++) {
                for(int k=0; k<n; k++) 
                    mat[k][zeroes[i][j]] =0;

                for(int k=0; k<m; k++) 
                    mat[zeroes[i][0]][k] = 0;
            }
      }

      return;
    }
};