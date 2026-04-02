class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int ind, int val) {
        map<int,int>v;
    
        for(int i = 0 ; i <= ind && i < nums.size() ; i++){
            int k = floor(float(nums[i])/(val+1));
            if(v.count(k)!=0) return true;
            if(v.count(k+1)!=0 && abs(nums[i]-v[k+1]) <=val) return true;
            if(v.count(k-1)!=0 && abs(nums[i]-v[k-1]) <=val) return true; 
            v[k] = nums[i];           
        }
        int i = 0;
        for(int k = ind+1 ; k < nums.size() ; k++){
            int gg = floor(float(nums[i++])/(val+1));
            v.erase(gg);
            gg = floor(float(nums[k])/(val+1));
            if(v.count(gg)!=0) return true;
            if(v.count(gg+1)!=0 && abs(nums[k]-v[gg+1]) <=val) return true;
            if(v.count(gg-1)!=0 && abs(nums[k]-v[gg-1]) <=val) return true;
            v[gg] = nums[k];
        }
        return false;
    }
};
