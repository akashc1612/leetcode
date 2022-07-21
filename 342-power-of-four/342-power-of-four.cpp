class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0;i<20;i++){
            if(n==pow(4,i))return true;
            else if(n<pow(4,i))return false;
        }
        return false;
    }
};