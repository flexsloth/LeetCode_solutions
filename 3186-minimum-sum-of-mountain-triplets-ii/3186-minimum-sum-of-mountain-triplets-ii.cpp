class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int mnm = 1e9;
        int n = nums.size();
        vector<int>pre(nums.size()) , suff(nums.size());
        pre[0] = nums[0];
        suff[nums.size()-1] = nums[nums.size()-1];
        
        for(int i = 1 ; i < n ; i++) pre[i] = min(pre[i-1],nums[i]);
        for(int i=n-2;i>=0;i--) suff[i] = min(suff[i+1],nums[i]);
        
        for(int i=1;i<n-1;i++){
            if((pre[i-1]<nums[i]) and(suff[i+1]< nums[i])) mnm = min(mnm,nums[i]+pre[i-1]+suff[i+1]);
        }
        if(mnm==1e9) return -1;
        else return mnm;
    }
};
