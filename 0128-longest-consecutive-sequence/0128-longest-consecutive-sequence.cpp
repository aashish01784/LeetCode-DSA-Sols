class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // so to get a consecutive number : each number = prev number + 1
        
        unordered_set<int> s(nums.begin(), nums.end());
        int maxL = 0;
        for(int i : s){
            if(s.find(i-1)==s.end()){
                int present = i;
                int Length =1;
                while(s.find(present+1)!=s.end()){
                    present++;
                    Length++;
                }
                maxL = max(maxL, Length);

            }
        }
        return maxL;
    }
};