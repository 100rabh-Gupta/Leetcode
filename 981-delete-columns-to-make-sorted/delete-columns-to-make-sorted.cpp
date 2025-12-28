class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        string s=strs[0];
        int count=0;
        for ( int i=0;i<s.size();i++){
            char v=s[i];
             bool h=0;
            for ( int j=1;j<strs.size();j++){
               
                string  d = strs[j];
                char f=d[i];
                if ( v-'a'<=f-'a'){
                    v=f;
                }
                else {h=1;
                continue;}

            }
            if(h)
            count++;
        


        }
        return count;
        
    }
};