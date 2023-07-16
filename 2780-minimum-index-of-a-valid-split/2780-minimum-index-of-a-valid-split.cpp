class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int len = nums.size();
        map<int,int> mp;
        int maxy = -1,Dee=0,DIY=0;
        int first = 0,last = 0;
        for(auto x : nums){
            mp[x]++;
            if(mp[x]>maxy){
                Dee = x;
                DIY = maxy = mp[x];
            }
        }
        if(2*DIY<=len) return -1;
        for(int i=0;i<len-1;i++){
            if(nums[i]==Dee) first++;
            last = DIY - first;

            if(first*2 > i+1 and last*2 > len-i-1) return i;
        }
        return -1;
    }
};