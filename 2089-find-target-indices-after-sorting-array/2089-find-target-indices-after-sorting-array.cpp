class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        /*So the logic that we are going to use is:
        Binary Search is successful in finding only 1 instance of an element if there are multiple duplicates. So how do we find the rest instances. 
        What I thought is that binary search randomly finds one instance of an element from the sorted array.
        So the other instances of that element will either be on its right or on its left and no where else.
        What if we store the index of the element found and use that index to find if the same element lies on it sright and left.
        NOTE: The boundary conditions, index must not go below 0 or higher than size of array which can give runtime error*/
        int lo=0,hi=nums.size()-1,mid;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(target==nums[mid]){
                ans.push_back(mid);
                break;
                }
            
            if(target>=nums[mid])lo=mid+1;
            else hi=mid-1;
        }
/*If no instance is found then we return the empty array as there cannot be any other duplicate*/
    if(ans.size()==0)return ans;
        
    int temp_mid=mid;
//checking left side of the found element for duplicates;
    mid--;
    while(mid>=0 && nums[mid]==target){
        ans.push_back(mid);
        mid--;
    }
    mid=temp_mid;
    mid++;
/*Checking the right side of the found element*/
    while(mid<nums.size()&&nums[mid]==target){
        ans.push_back(mid);
        mid++;
    }
        //Sorting the found element in ascending order
    sort (ans.begin(), ans.end());
    return ans;
        
    
}
};