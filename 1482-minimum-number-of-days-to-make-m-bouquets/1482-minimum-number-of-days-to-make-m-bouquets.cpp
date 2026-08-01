class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        // check if it is impossible
        if((long long)m*k>n) return -1;

        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int h= *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        while(l<=h){
          int mid = l + ((h-l)/2);
          int bqts = 0;
          int consecutive =0;
          for(int i : bloomDay){
            if(i <= mid){
              consecutive++;
              if(consecutive==k){
                bqts++;
                consecutive=0;
              }
              

            }
            else{
                consecutive=0;
              }
            
          }
          if(bqts>=m){
              ans = mid;
              h = mid-1;
            }
            else{l=mid+1;}

        }
        return ans;

    }
};