class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        const int n=nums.size();
        for(int i=0,j=n-1;i<=j;){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                v.push_back(nums[i]*nums[i]);i++;
            }
            else{
                v.push_back(nums[j]*nums[j]);j--;
            }
        }
        vector<int> v1(n);
        for(int i=n-1;i>=0;i--)v1[n-i-1]=v[i];
        return v1;
    }
};