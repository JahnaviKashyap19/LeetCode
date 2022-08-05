class Solution {
public:
    int missingNumber(vector<int>& nums) {
//brute force approach T.C = O(nlogn) S.C = O(1)
/*
sort(nums.begin(),nums.end());
for(int i=0; i<nums.size(); i++) {
if(nums[i] != i) {
return i;
}
}
return nums.size();
*/
//optimal approach T.C = O(n) S.C = O(1)
int n = nums.size();
long long sum = n*(n+1)/2;
for(int i=0; i<n; i++) {
sum -= nums[i];
}
return sum;
}
};