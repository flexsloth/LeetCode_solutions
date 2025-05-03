class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int mini = INT_MAX;
        for(int i = 1 ; i <= 6 ; i++){
            int up = 0 , down = 0, both = 0;
            bool flag = true;
            for(int j = 0 ; j < tops.size() ; j++){
                if(tops[j] != i && bottoms[j] != i){
                    flag = false;
                    break;
                }
                else{
                    if(tops[j] == bottoms[j]) both++;
                    else if(tops[j] == i) up++;
                    else down++;
                }
            }
            if(flag) {
                mini = min(mini, min(up,down));
            }
        }
        return (mini == INT_MAX)?-1:mini;
    }
};