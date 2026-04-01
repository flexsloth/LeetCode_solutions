class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>mp;
        for(auto i : nums){
            mp.insert(i);
        }
        return (mp.size()!=nums.size())?true:false;
    }
};