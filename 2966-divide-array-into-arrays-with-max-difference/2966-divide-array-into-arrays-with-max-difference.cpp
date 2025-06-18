class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(begin(nums) , end(nums));
        for(auto i : nums)cout<<i<<" ";
        cout<<endl;
        vector<vector<int>>ans;
        int n = nums.size();
        int i = 0;
        // for(int i = 1 ; i < n ; i++){
        //     if(abs(nums[i]-nums[i-1])>k)
        //         return {};
        // }
        while(n){
            if(abs(nums[i]-nums[i+1])>k || abs(nums[i+1]-nums[i+2])>k || abs(nums[i]-nums[i+2])>k)
                return {};
            // if(nums[i])
            ans.push_back({nums[i],nums[i+1],nums[i+2]});
            i+=3;
            n-=3;
            // if(abs(nums[i]-nums[i-1])>k)
            //     return {};
        }
        return ans;
    }
};