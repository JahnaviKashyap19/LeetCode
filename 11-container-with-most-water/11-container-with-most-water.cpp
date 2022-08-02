class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0,end=height.size()-1;
        int area=0,ans=0;
        while(start<end){
            area=(end-start)*min(height[start],height[end]);
            ans=max(ans,area);
            if(height[start]>=height[end])end--;
            else start++;
        }
        return ans;
    }
};