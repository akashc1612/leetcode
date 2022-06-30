class Solution {
public:
    int minMoves2(vector<int>& nums) {
        long n1 = accumulate(nums.begin(),nums.end(),0);
        long n = nums.size();
        long avg = n1/n;
        long ans=0,ans1=0;
        for(auto i:nums){
            ans = ans + abs(i-avg);
        }
        nth_element(begin(nums), begin(nums) + n / 2, end(nums));
        int median = nums[n / 2];
        return accumulate(begin(nums), end(nums), 0,[&](int a, int b) { return a + abs(b - median); });
    }
};