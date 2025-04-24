class Solution { 
public: 
    int countCompleteSubarrays(vector<int>& nums) { 
        int n = nums.size(); 
        unordered_set<int> ans; 
        for (int i : nums) { 
            ans.insert(i); 
        } 
        int k = ans.size(); 
        unordered_map<int, int> mans; 
        int cntans = 0; 
        int i = 0; 
        for (int j = 0; j < n; j++) { 
            mans[nums[j]]++; 
            while (mans.size() == k) { 
                cntans += n - j; 
                mans[nums[i]]--; 
                if (mans[nums[i]] == 0) { 
                    mans.erase(nums[i]); 
                } 
                i++; 
            } 
        } 
        return  cntans;
    } 
};