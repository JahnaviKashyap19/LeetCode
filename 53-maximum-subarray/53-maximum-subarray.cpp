class Solution {
public:
//Brute Force
//     int maxSubArray(vector<int>& nums) {
//         int n=nums.size();
//         if(n==0)return 0;
//         if(n==1)return nums[0];
//         int res=nums[0];
//         for(int i=0;i<n;i++){
//             for(int j=i;j<n;j++){
//                 int sum=0;
//                 for(int k=i;k<=j;k++){
//                     sum+=nums[k];
//                 }
//                 res=max(sum,res);
//             }
//         }
//         return res;      
//     }
//     int maxSubArray(vector<int>& nums){
// optimal soln
//         int n=nums.size(),res=INT_MIN;
//         if(n==1)return nums[0];
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=nums[j];
//                 res=max(res,sum);
//             }
            
//         }
//        return res; 
//     }
   int maxSubArray(vector<int>& nums){
    int n=nums.size();
    int sum=0,maxi=INT_MIN;
    for(auto i:nums){
        sum+=i;
        maxi=max(sum,maxi);
        if(sum<0)sum=0;
        
    }
       return maxi;
   } 
    
};