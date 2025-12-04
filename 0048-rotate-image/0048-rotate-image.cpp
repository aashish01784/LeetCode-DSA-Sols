class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // We will do this in steps 1) we transpose the matrix and then 2) we reverse all rows 
        int n = matrix.size();
        // step1
        for (int i=0; i< n; ++i){
            for (int j=i+1; j<n; ++j){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // step2
        for (int i=0; i< n; ++i){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};