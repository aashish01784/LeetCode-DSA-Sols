class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         // we will solve this by using binary search method
        int m = matrix.size();
        if (matrix.empty() || matrix[0].empty()) return false;
        int n = matrix[0].size();
        int l = 0;//low
        int h = m * n -1;// high

        while (l<=h){
            long long mid = l +(h-l)/2;
            // we know that we got a relation between 2d position and 1d index i.e., index = row * n + column
            int r = mid / n;
            int c = mid % n;
            int val = matrix[r][c];

            if(val == target){
                return true;
            }
            else if (val < target)
            {
                l = mid +1;
            }
            else
            {
                h = mid-1;
            }
            
            
        }
        return false ;


        
    }
    
};