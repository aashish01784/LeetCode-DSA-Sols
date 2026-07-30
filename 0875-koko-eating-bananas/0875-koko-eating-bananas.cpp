class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int high = *max_element(piles.begin(), piles.end());
        int answer = high;
        while(l<=high){
            int mid = l + (high-l)/2 ;
            long long th=0;
            for (int pile : piles) {
                th += (pile + mid - 1) / mid;
                }
            if(th<=h){
                answer =mid;
                high = mid-1;
            }
            else{
                l = mid+1;
            }

        }
        return answer;
    }
};