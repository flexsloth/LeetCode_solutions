class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     unordered_map<int,int> mp;
     for(auto i : nums){
        mp[i]++;
     }   
     if(nums.size()==0) return 0;
     int cnt=1;
     int maxlen=-1;
     for(int i=0 ; i<nums.size(); i++){
       if(!mp.count(nums[i]-1)){
        int sum=nums[i];
        while(mp.count(sum+=1)){
            cnt++;
        }
       }
       maxlen=max(maxlen, cnt);
       cnt = 1;
     }
    return maxlen;
    }
};