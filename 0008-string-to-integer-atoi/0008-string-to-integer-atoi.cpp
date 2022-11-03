class Solution {
public:
    int myAtoi(string s) {
        long x=atol(s.c_str());
        if(x>INT_MAX){
            x=INT_MAX;
        }
        else if(x<INT_MIN){
            x=INT_MIN;
        }
        return x;
    }
};