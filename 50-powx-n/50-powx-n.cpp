class Solution {
public:
    double myPow(double x, int n) {
        long double x1=1.0;
        long double p = x;
        for(long m=n>=0?(long)n:-1*(long)n;m!=0;m>>=1){
            if(m&1)x1*=p;
            p=p*p;
        }
        return n>=0?x1:1.0L/x1;
    }
};