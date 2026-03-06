class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // we will solve this by by using kandane's algorithm 
        int sum =nums[0];
        int max_sum = nums[0];
        for(int i=1; i<nums.size(); i++){
            sum = max(nums[i], sum + nums[i]);
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    } 
};