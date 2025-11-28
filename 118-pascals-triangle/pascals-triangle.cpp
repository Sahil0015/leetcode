class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pt;
        vector<int> line1;
        line1.push_back(1);
        pt.push_back(line1);
        if(numRows==1) return pt;

        vector<int> line2;
        line2.push_back(1);
        line2.push_back(1);
        pt.push_back(line2);
        if(numRows==2) return pt;

        int k = 2;
        while(k < numRows) {
            vector<int> line(k+1);
            line[0]=1; line[k]=1;
            for(int i=1; i<k; i++) {
                line[i] = pt[k-1][i-1]+pt[k-1][i];
            }
            pt.push_back(line);
            k++;
        }

        return pt;
    }
};