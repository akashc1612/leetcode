class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        const int n = nums.size();
        int a1 = nums[0]*nums[1]*nums[2];
        int a2 = nums[0]*nums[1]*nums[n-1];
        int a3 = nums[0]*nums[n-1]*nums[n-2];
        int a4 = nums[n-1]*nums[n-2]*nums[n-3];
        a3 = max(a3,a4);
        a2 = max(a1,a2);
        return max(a2,a3);
    }
};