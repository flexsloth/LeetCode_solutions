class Solution {
public:
    int subtractProductAndSum(int n) {
         string a= to_string(n);
         int sum=0;
         int pro=1;
         for(int i=0; i<a.size(); i++){
             sum+=a[i] - '0';
             pro=pro*(a[i]-'0');
         }
         return pro-sum;
        //  return 0;
    }
};