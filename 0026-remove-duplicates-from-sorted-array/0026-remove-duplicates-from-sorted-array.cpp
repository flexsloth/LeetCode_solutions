class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1 , j = 1;
        int k = 0;
        int n = nums.size();
        while(i < n){
            if(nums[i] != nums[k]){
                swap(nums[i],nums[j]);
                j++;k++;
            }
            i++;
        }
        return j;
    }
};