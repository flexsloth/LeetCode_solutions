class Solution {
    public int arrangeCoins(int n) {
        int count=0;
        int inc=1;
        while(n-->0){
            n-=inc;
            inc++;
            count++;
        }
        return count;
    }
}