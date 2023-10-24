class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>ss;
        string s = "";

        for(auto i:nums)
            ss.push_back(to_string(i));

        sort(ss.begin(),ss.end(), [](string &a, string&b){return a+b>b+a;});

        for(auto i:ss)
            s+=i;
        
        return (s[0] == '0')? "0":s;
    }
};