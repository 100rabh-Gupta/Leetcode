class Solution {
public:
    void sortColors(vector<int>& nums) { 
int n= nums.size();
int first =0 ,second =0 ,third=n-1;
 while ( second<=third ){


if ( nums[second]==1)second++;
else if ( nums[second]==0){ swap ( nums[first],nums[second]);
first++;
second++;

}
else{ swap ( nums[second],nums[third]);
third--;


}

 }

     }
};