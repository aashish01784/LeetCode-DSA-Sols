class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int h = accumulate(weights.begin(), weights.end(), 0);
        int ans =0;
        while(l<=h){
            int mid = l + (h-l)/2;
            int cl =0; // current load
            int rd =1;// req days
            for(int weight:weights){
                if(cl + weight<= mid){
                    cl += weight;

                }
                else{
                    rd+=1;
                    cl=weight;
                }
            }
            if(rd<=days){
                ans = mid;
                h = mid-1;
            }
            else{l = mid+1;}
        }
        return ans;
    }
};