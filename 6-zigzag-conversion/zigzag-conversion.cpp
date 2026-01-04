class Solution {
public:
    string convert(string s, int n) {
       
        if (n == 1) return s;
      vector<vector<char>> zig(n, vector<char>(s.size(), ' '));
     int index=0,j=0;
        while( s.size()>index ){
           
            for( int i=0;i<n && index < s.size();i++){
                zig[i][j]=s[index];
                index++;
            

        }
        j++;

            for ( int i=n-2;i>0 && index < s.size();i--){
                zig[i][j]=s[index];
                index++;
                j++;

            
        }
         
        
        }
        string ans="";
        for( int i=0;i<n;i++){
            for ( int k=0;k<j;k++){
                if (zig[i][k]!=' ') ans+=zig[i][k];

            }
        }

        return ans;
        
    }

};