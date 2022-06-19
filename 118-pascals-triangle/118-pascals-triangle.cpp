class Solution {
public:
    vector<vector<int>> generate(int numRows) {

    int temp=1,temp_size;
    vector<vector<int>> finall;
    
    while(temp<=numRows){
        
        if(temp==1){
            vector<int> v;
            v.push_back(1);
            finall.push_back(v);
            temp++;
    }
        else if(temp==2){
            vector<int> v;
            v.push_back(1);
            v.push_back(1);
            finall.push_back(v);
            temp++;
        }
        else{
            temp_size = finall.size();
            vector<int> v;
            v.push_back(1);
            
            for(int i=0;i<finall[temp_size-1].size()-1;i++){
                //cout<<"for ";
                v.push_back(finall[temp_size-1][i]+finall[temp_size-1][i+1]);
            }
            v.push_back(1);
            finall.push_back(v);
            temp++;
        }
    }
   return finall; 
    
    
}
};
