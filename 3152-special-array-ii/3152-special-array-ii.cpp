class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool>ans;
        if(nums.size() == 1){
            vector<bool>gg(queries.size(),true);
            return gg;
        }
        vector<int>v;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i]%2 == 0 && nums[i+1]%2 == 0){ v.push_back(i);}
            if(nums[i]%2 != 0 && nums[i+1]%2 != 0){ v.push_back(i);}
        }
        
        if(v.size() == 0){
            vector<bool>gg(queries.size(),true);
            return gg;
        }
        sort(v.begin() , v.end());
        
        for(auto i : queries){
            int num1 = i[0];
            int num2 = i[1];
            int start,end;
            int ans1=v[0];
            start = 0,end = v.size()-1;
            cout<<start<<":"<<end<<endl;
            while(start<=end){
                int mid = (start+end)/2;
                
                if(v[mid] >= num1){
                    ans1 = v[mid];
                    end = mid-1;
                }
                else start = mid+1;
                
            }
            if(ans1>=num1 && ans1 <num2){
                ans.push_back(false);
            }
            else
                ans.push_back(true);
            
        }
        return ans;
    }
};