class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> num;
        if(n<=1)return n;
        int a=0;
        for(int b=1;b<n;++b){
            while(nums[b]==nums[b-1])
                if(++b>=n)break;
            if(b<n)nums[++a]=nums[b];
        }
        return a+1;
    }
};