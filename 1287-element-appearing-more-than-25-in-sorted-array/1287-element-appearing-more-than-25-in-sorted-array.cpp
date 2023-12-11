class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count = 1 , maxi = INT_MIN , ans , i;
        for(i = 1 ; i < arr.size() ; i++){
            if(arr[i] != arr[i-1]){
                if(count > maxi){
                    maxi = count;
                    ans = arr[i-1];
                }
                count = 0;
            }
            count++;
            // cout<<"i : "<<i<<" count : "<<count<<endl;
        }
        if(count>maxi)
            ans = arr[i-1];
        return ans;
    }
};