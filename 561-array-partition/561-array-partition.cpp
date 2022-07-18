class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum =0 ;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+2){
            sum = sum + min(nums[i],nums[i+1]);
        }
        return sum;
    }
};