class Solution {
public:
    long long maximumHappinessSum(vector<int>& hap, int k) {
        sort(hap.begin(), hap.end());
        int n = hap.size() - 1;
        long long ans = 0;
        int count = 0;
       
        for (int i = 0; i < k; i++) {
            
            
          int happiness=hap[n]-count;
          if ( happiness>0){
            ans += happiness;
            hap[n]=0;
            }

             n--;
            count++;
        }
        return ans;
    }
};