class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        // step 1: left -> right
        // step 2: top -> bottom
        // step 3: right -> left
        // step 4: bottom -> top
        if (matrix.empty()) return res;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // step1
            for (int j = left; j <= right; ++j)
                res.push_back(matrix[top][j]);
            ++top;

            // step2
            for (int i = top; i <= bottom; ++i)
                res.push_back(matrix[i][right]);
            --right;

            // step3
            if (top <= bottom) {
                for (int j = right; j >= left; --j)
                    res.push_back(matrix[bottom][j]);
                --bottom;
            }

            // step4
            if (left <= right) {
                for (int i = bottom; i >= top; --i)
                    res.push_back(matrix[i][left]);
                ++left;
            }
        }
        return res;
    }
};