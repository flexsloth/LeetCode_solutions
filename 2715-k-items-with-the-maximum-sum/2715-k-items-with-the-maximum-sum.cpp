class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        if(numOnes + numZeros >= k)
        return min(numOnes,k);
        else{
            int aa = numOnes+numZeros;
            return numOnes-(k-aa);
        }
        return -1;
    }
};