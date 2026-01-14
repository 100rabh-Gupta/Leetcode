class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>> matri(n,vector<int>(n,0));
      int count=1;


        
        int top =0,right =n-1,left=0,buttom=n-1;
        while( top<=buttom && left<=right)
        {
            for ( int i=left;i<=right;i++){
                matri[top][i]=count;
                count++;
            }
            top++;
            for ( int i=top;i<=buttom;i++){
                matri[i][right]=count;
                count++;
            }
            right--;
            if(top<=buttom){
                for ( int i=right;i>=left;i--){
                matri[buttom][i]=count;
                count++;
            }
            buttom--;
            }
            if(left<=right){
                for ( int i=buttom;i>=top;i--){
                matri[i][left]=count;
                count++;
            }
            left++;
        }

        }
        
        
return matri;
     
        
    }
};