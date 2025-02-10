class Solution {
public:
    string clearDigits(string s) {
        for(int i = 0 ; i < s.size() ; i++){
            if(isdigit(s[i])){
                s.erase(i,1);
                i--;
                
                for(int j = i ; j >= 0 ; j--){
                    cout<<s[j]<<endl;
                    if(!isdigit(s[j])){
                        cout<<"erasing : "<<s[j]<<endl;
                        s.erase(j,1);
                        i--;
                        break;
                    }
                }
            }
        }
        return s;
    }
};