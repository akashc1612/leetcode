class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0;i<20;i++){
            if(n==pow(3,i))return true;
            else if(n<pow(3,i))return false;
        }
        return false;
    }
};