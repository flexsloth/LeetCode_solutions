class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        int flag;
        for(int i = 0 ; i < words.size() ; i++){
            string gg = words[i];
            flag=0;
            for(int j = 0 ; j < pref.size() ; j++){
                if(pref[j]!=gg[j]){
                    flag=1;break;
                }
                
            }
            if(flag == 0) count++;
        }
        return count;
    }
};