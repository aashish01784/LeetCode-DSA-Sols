class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // this can be solved using Two pointers method
        int n = nums.size();
        if(nums.empty()) return 0;
        int last=0;
        for(int first=1; first<n; first++){
            if(nums[first] != nums[last]){
                last++;
                nums[last] = nums[first];

            }

        }
        return last+1;

    }
};