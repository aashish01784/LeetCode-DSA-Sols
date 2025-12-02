class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         // Binary search implementation
        int l = 0;
        int h = nums.size() - 1;
        while (l<= h){
            int m = (l+h)/2;
            if (target == nums[m]){
                return m;
            }
            else if (target < nums[m])
            {
                h = m-1;
            }
            else
            {
                l = m+1;
            }
            
            
        }
        return l;



        
    }
    
};