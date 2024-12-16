class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        while(k--){
            int gg = *min_element(nums.begin() , nums.end());
            cout<<gg<<endl;
            for(int i = 0 ; i < nums.size() ; i++){
                if(nums[i] == gg){ nums[i]*=m;
                break;}
            }
        }
        return nums;
    }
};