class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSize=matrix.size(),colSize=matrix[0].size(),col0=1;
        for(int i=0;i<rowSize;i++){
            if(matrix[i][0]==0)col0=0;
            for(int j=1;j<colSize;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
                    
            }
        }
        for(int i=rowSize-1;i>=0;i--){
            for(int j=colSize-1;j>=1;j--){
                if(matrix[0][j]==0 || matrix[i][0]==0)matrix[i][j]=0;
            }
            if(col0==0)matrix[i][0]=0;
        }
    }
};