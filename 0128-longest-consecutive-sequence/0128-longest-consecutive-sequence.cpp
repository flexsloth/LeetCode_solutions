class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        int maxi = (nums.size() == 0)?0:1;
        for(auto i : nums) s.insert(i);
        for(auto i : nums){
            if(s.find(i-1) == s.end()){
                int cnt = 1;
                int gg = i;
                while(s.find(gg+1) != s.end()){
                    cnt++;
                    gg++;
                }
                maxi = max(maxi,cnt);
                cnt = 1;
            }
        }
        return maxi;
    }
};