class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        
        vector<int>ans;
        for(int i = 0 ; i < nums.size() ; i+=2){
            int x = nums[i];
            while(x--){
                ans.push_back(nums[i+1]);
            }
        }
        return ans;
    }
};