class Solution {
public:
    int helper(vector<int>&a , int mid){
        int count = 1;
        int cow = a[0];
        for(auto i : a){
            if(i-cow >= mid){
                count++;
                cow = i;
            }
        }
        return count;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin() , position.end());
        int start = 0 , end = position.back() - position.front();
        int ans;
        while(start <= end){
            int mid = (start+end)/2;
            int gg = helper(position,mid);
            if(gg>=m){
                ans = mid;
                start = mid+1;
            }
            else
                end = mid-1;
        }  
        return ans;      
    }
};