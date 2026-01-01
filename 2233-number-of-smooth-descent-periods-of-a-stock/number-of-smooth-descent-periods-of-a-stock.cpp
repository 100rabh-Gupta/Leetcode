class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long count=0,cnt=prices.size();
        int first=0,second=0;
        while(second+1<prices.size()){
            bool b=0;
       while (second + 1 < prices.size() &&
       prices[second] == prices[second + 1] + 1){
                second++;
                
                b=1;

            }
            
  if (b){
     long long  l= second-first+1;
      cnt-=l;
  count+=(l*(l+1)/2);
  }
          
            first = second;
            first++;
             second++;


        }
        return count+cnt;
        
    }
};