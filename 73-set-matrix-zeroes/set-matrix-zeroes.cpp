class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        

       int row =matrix.size(),col=matrix[0].size();
       unordered_set<int>indexr;
        unordered_set<int>indexc;

        for ( int i=0; i<row;i++){
            for ( int j=0;j<col;j++){
                if ( matrix[i][j]==0){
                  indexr.insert(i);
                  indexc.insert(j);
                  


                }
            }
        }
       for ( int i:indexr){

            for ( int j=0;j<col;j++){
                matrix[i][j]=0;


            }
       }



        for ( int i:indexc){

            for ( int j=0;j<row;j++){
                matrix[j][i]=0;


            }
       }

          

            

           
    }
};