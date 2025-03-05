class Solution {
public:
    long long coloredCells(int n) {
        n--;
        return  (long long)2*n*1LL*(n+1)+1;
    }
};