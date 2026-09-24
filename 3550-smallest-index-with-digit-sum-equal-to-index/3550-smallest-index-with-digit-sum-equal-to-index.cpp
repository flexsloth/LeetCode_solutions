class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
            string gg = to_string(nums[i]);
            int a = 0;
            for(auto k : gg){
                a+=k-'0';
            }
            if(a == i) return i;
        }
        return -1;
    }
};