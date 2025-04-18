class Solution {
public:
    // string helper(int a ,string s){
    //     if(a == 1) return "1";

    // }
    string countAndSay(int n) {
        // // for(int i = 1 ; i <= n ; i++){

        // // }
        // return helper(n,"");
        if(n == 1) return "1";
        if(n == 2) return "11";
        map<int ,int>mp;
        // mp[1] = 1;
        string ans = "11";
        int i,j;
        for( i = 3 ; i<=n ; i++){
            string temp = "";
            int cnt = 1;
            for( j = 0 ; j < ans.size()-1 ; j++){
                cout<<ans[j]<<" ";
                if(ans[j] != ans[j+1]){
                    cout<<"cnt:"<<cnt<<endl;
                    temp+= to_string(cnt);
                    temp+=(ans[j]);
                    cnt = 1;
                }
                else cnt++;
            }
            cout<<"cnt:"<<cnt<<endl;
            temp+=to_string(cnt);
            temp+=(ans[ans.size()-1]);
            ans = temp;
            cout<<endl;
            cout<<temp;
            cout<<endl;
            
        }
        return ans;
    }
};