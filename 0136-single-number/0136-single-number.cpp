class Solution {
public:
    int singleNumber(vector<int>& nums) {
            // we will try using xor operation
        int result = 0;
        for (int n : nums){
            result ^= n;
            
        }
        return result;
    }
};