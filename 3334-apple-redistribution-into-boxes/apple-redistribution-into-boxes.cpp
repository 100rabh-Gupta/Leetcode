class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
   
        sort(c.begin(),c.end(),greater<int>());
        int sum = accumulate(a.begin(), a.end(), 0);
      

     int need =0;
     while(sum>0){
        sum-=c[need];
        need+=1;
     }
     return need;






    }
};