class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int gg = t-nums[i];
            int start = i+1;
            int end = n-1;
            while(start<=end){
                int mid = start + (end-start)/2;
                if(nums[mid] == gg) return{i+1,mid+1};
                (nums[mid]>gg) ? end = mid - 1 : start = mid + 1;
            }
        }
        return{};
    }
};