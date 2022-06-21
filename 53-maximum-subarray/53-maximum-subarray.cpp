class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int num=nums.size(),maxx=nums[0];
        int sum=0;
        for(int i=0;i<num;i++){
            if(sum<0)sum=0;
            sum+=nums[i];
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};