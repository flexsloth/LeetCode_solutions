class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt=0;
        for(int i=0; i<nums.size(); i=i+2){
            if(nums[i]==nums[i+1]) cnt++;
            if(cnt==nums.size()/2) return true;
        }
       return false;
    }
};