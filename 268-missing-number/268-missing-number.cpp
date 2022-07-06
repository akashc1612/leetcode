class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int t=0,t1=0;
        const int n=nums.size();
        vector<int> v(n);
        iota(v.begin(),v.end(),1);
        t=accumulate(v.begin(),v.end(),t);
        t1=accumulate(nums.begin(),nums.end(),t1);
        return t-t1;
    }
};