class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
       int  n=nums.size()/2;
       vector<int>count(10000,0);
       int ans ;
        for ( int i=0;i<nums.size();i++){
            int d=nums[i];
            count[d]++;

            if (count[d]==n)return d;
        }
         for ( int i=0;i<n+2;i++){
            if ( count[i]==n){
                ans=i;
               
            }
         }

         return ans;

        
        
        
    }
};