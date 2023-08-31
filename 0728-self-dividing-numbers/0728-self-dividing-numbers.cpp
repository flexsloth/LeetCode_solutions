class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int>v;
        for(int i = left ; i <= right ; i++)
        {   
            int gg = i;
            if(gg%10 == 0) continue;
            string ss = to_string(gg);
            int cnt=0;
            for(int i = 0 ; i < ss.size() ; i++){
                int fafa=ss[i] - '0';
                if(fafa == 0) break;
                if(gg%fafa == 0 ){
                    cnt++;
                }
            }
            if(cnt == ss.size()) v.push_back(gg);
        }
        return v;
    }
};