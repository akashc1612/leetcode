class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int a=0;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                swap(nums[i],nums[n-1]);
                n--;
                i--;
            }
            else a++;
        }
        return a;
    }
};