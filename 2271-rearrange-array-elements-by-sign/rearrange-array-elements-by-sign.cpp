class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>ans(n);
        int i=0, j=1,ind;
        for( ind=0;ind<n;ind++){

            if(nums[ind]>0) {
                ans[i]=nums[ind];
                i+=2;
            }
            else {
                 ans[j]=nums[ind];
                j+=2;
            }
           
        }
        nums=ans;
        ans.clear();
        return nums;
        
    }
};