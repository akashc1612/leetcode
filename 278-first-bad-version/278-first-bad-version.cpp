// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        if(isBadVersion(1))return 1;
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(isBadVersion(mid)&&!isBadVersion(mid-1))return mid;
            else if(isBadVersion(mid)&&isBadVersion(mid-1))high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
};