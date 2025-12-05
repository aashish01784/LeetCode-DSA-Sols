class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int pt=0;
        int nt = 1;
        for (int x : nums){
            if(x>0){
                result[pt]=x;
                pt += 2;
            }
            else
            {
                result[nt]=x;
                nt += 2;
            }
            
        }
        return result;
        
    }
};