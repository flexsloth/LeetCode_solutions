class Solution {
public:
    int maximumCount(vector<int>& nums) {
        if(nums[nums.size() -1] < 0) return nums.size();

        int start = 0 ;
        int end = nums.size()-1;
        while(start<end){
            int mid = start + (end - start)/2;
            if(nums[mid]<0){
                start = mid + 1;
            }
            else{
                end = mid ;
            }
        }
        int pos = nums.size() - start;
        int i = start;
        while(i< nums.size() && nums[i] == 0){
            pos -- ;
            i++;
        }
    return max(start,pos);
    }
};