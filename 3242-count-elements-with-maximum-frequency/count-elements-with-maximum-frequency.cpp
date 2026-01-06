class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int >c;
        int index=0;
        while(index<nums.size()) {
            c[nums[index]]++;
            index++;

        }

        int maxVal =INT_MIN;

       

        
for (auto &it : c) {
    maxVal = max(maxVal, it.second);
}
int ans=0;
         for (auto &it:c ){
            if (it.second==maxVal){
            ans+=it.second;
            }

        }
      
    return ans;
    }
};