class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur_sum=0;
        int sum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            cur_sum=max(nums[i],cur_sum+nums[i]);
            sum=max(sum,cur_sum);
        }
        return sum;
    }
};