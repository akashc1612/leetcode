class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, sum = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){count = max(count,sum);sum=0;}
            else sum++;
        }
        count = max(count,sum);
        return count;
    }
};