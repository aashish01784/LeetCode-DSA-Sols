class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int Mcount=0;
        for(int i : nums){
            if(i==1){
                count++;
                Mcount = max(Mcount, count);

            }
            else{
                count=0;
            }

        }
        return Mcount;
    }
};