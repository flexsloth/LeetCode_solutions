class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int gg;
        int ans=-1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == target) return i;
            else if(target>=nums[i])    ans=i;
        }
         return (ans == -1)? 0 : ans+1;
        // return ans+1;
    }
};