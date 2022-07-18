class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<bool>row0(row);
        vector<bool>col0(col);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    row0[i]=true;
                    col0[j]=true;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(row0[i]==true || col0[j]==true )matrix[i][j]=0;
            }
        }
    }                        
};