class Solution {
public:
    int sum = 0;
    void bin(uint32_t n){
        if(n>1)
            bin(n/2);
        if(n%2)sum++;
    }
    int hammingWeight(uint32_t n) {
        bin(n);
        return sum;
    }
};