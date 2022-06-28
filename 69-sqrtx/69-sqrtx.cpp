class Solution {
public:
    int mySqrt(int x) {
        int low=0,high=x;
        while(low<=high){
            long mid=low+(high-low)/2;
            long ans=mid*mid;
            if(ans==x){
                return mid;
            }
            else if(ans>x)high=mid-1;
            else low=mid+1;
        }
        return high;
    }
};