class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        vector<bool> row(rowSize);
        vector<bool>col(colSize);
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                if(matrix[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0;i<rowSize;i++){
            for(int j=0;j<colSize;j++){
                if(row[i]==true|| col[j]==true)matrix[i][j]=0;
            }
        }
    }
};