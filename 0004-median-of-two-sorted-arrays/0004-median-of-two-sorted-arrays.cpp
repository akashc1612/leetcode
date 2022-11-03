class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        long n = nums1.size() + nums2.size();
        vector<int> nums(n,0);
        auto it1=nums1.begin(),it2=nums2.begin(),it=nums.begin();
        for(;it!=nums.end();){
            *it = it2 == nums2.end()||(it1!=nums1.end()&&*it1<*it2)?*it1++:*it2++;
            it++;
        }
        return (n%2==0)?(((double) nums[n/2]+nums[n/2-1])/2):((double)nums[n/2]);
    }
};