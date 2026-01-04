class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0,sum=0;
        for ( int i =0;i<nums.size();i++){
            int count=0;
            int j=1;
             sum=0;
            while (j*j<=nums[i]){
                if (nums[i]%j==0){
                    cout<<j<<" ";
                sum+=j;
                count++;

               if (j!=nums[i]/j){
                count++;
                sum+=nums[i]/j;
            }
                }
            if (count>4)break;
           j++;
        }

         if ( count==4){
             ans+=sum;}
      
        }
    return ans;
        
    }
};