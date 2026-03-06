class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // this question can be solved by using candidate and count method (Boyer–Moore Voting Algorithm)
        int candidate , count = 0;
        for(int num : nums){
            if(count ==0){
                candidate = num;
            }
            if(num == candidate){
                count++;

            }
            else
            {
                count--;
            }
            
        }
        return candidate;
    }
};