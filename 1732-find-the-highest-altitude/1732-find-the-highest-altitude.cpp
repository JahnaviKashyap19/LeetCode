class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=gain[0];
        for(int i=1;i<gain.size();i++){
            gain[i]+=gain[i-1];
            res=max(res,gain[i]);
        }
        //for(auto &i:gain)cout<<i<<endl;
        if(res>0)return res;
        return 0;
    }
};