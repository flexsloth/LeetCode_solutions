class Solution {
public:
    using ll = long long;
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        ll sum1 = 0 , sum2 = 0;
        ll cnt1 = 0, cnt2 = 0;
        for(auto i : nums1){ sum1+=i;
            if(i == 0) cnt1++;        
        }
        for(auto i : nums2){ sum2+=i;
            if(i == 0) cnt2++;        
        }
        // if(sum1 == sum2) return sum1;
        ll fin1 = sum1+cnt1;
        ll fin2 = sum2+cnt2;
        if(fin1>fin2 && cnt2!=0) return fin1;
        if(fin2 > fin1 && cnt1!=0) return fin2;
        if(fin1 != fin2 && (cnt1 == 0 || cnt2 == 0)) return -1;
        
        if(fin1 >= fin2) return fin1;
        else return fin2;
        return fin2;
    }
};