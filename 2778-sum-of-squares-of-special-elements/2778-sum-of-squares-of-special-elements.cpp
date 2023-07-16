class Solution {
private:
    bool unique(int a, int gg){
        return a%gg == 0;
    }
public:
    int sumOfSquares(vector<int>& nums) {
        int len = nums.size();
        
        int ret = 0;
        for(int i=0;i<len;i++)
            if(unique(len, i+1))
                ret += (nums[i] * nums[i]);

        return ret;
    }
};