class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        

       int row =matrix.size(),col=matrix[0].size();
       vector<vector<int>> matri(row,vector<int>(col,-1));
        for ( int i=0; i<row;i++){
            for ( int j=0;j<col;j++){
                if ( matrix[i][j]==0){
                   for ( int l=0;l<row;l++){
                    matri[l][j]=0;
                   }
                   for ( int k=0;k<col;k++){
                    matri[i][k]=0;
                   }


                }
            }
        }
       for ( int i=0; i<row;i++){
            for ( int j=0;j<col;j++){
            if ( matri[i][j]!=0){
                matri[i][j]=matrix[i][j];
}
            }

            }
            matrix=matri;
            matri.clear(); 
    }
};