class Solution {
public:
using ll = long long;
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<ll>a;
        for(int i = 0 ; i < nums1.size() ; i++){
            a.push_back(nums1[i]);
        }
        for(int i = 0 ; i < nums2.size() ; i++){
            a.push_back(nums2[i]);
        }
        sort(a.begin() , a.end());
        int gg = nums1.size() + nums2.size();
        if(gg%2 != 0) return (double)a[(gg-1)/2];
        int y=a[gg/2];
        int z = a[(gg-1)/2];
        double ss = (double)(y+z)/(double)2;
        return (double)ss;    
    }
};