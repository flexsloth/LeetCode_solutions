class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(),len2 = nums2.size();
        if(len1%2 == 0 && len2%2 == 0) return 0;
        int xr1 = 0 , xr2 = 0;
        for(auto i : nums1) xr1^=i;
        for(auto i : nums2) xr2^=i;
        if(len1%2 == 0) xr2 = 0;
        if(len2%2 == 0) xr1 = 0;
        return xr1^xr2;
    }
};