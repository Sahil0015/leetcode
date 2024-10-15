class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> answer;

        for(int i=0; i<n; i++) {
            vector<int> row;
            row.push_back(i);
            for(int j=0; j<m; j++) {
                if(mat[i][j] == 0) {
                    row.push_back(j);
                }
            }
            answer.push_back(row);
        }

        for(int i=0; i<answer.size(); i++) {
            if(answer[i].size() == 1) continue;
            else {
                int len = answer[i].size();

                for(int k=0; k<m; k++) {
                    mat[answer[i][0]][k] = 0;
                }

                for(int j=1; j<len; j++) {
                    for(int k=0; k<n; k++) {
                        mat[k][answer[i][j]] = 0;
                    }
                }
            }
        }
    }
};