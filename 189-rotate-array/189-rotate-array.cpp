class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        vector<int> v=nums;
        for(int i=0;i<nums.size();i++){
            v[(i+k)%nums.size()] = nums[i];
        }
        nums=v;
    }
};