class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1)return;
        vector<int> non;
        vector<int> zer;
        for(auto a:nums){
            if(a==0)zer.push_back(a);
            else non.push_back(a);
        }
        nums=non;
        nums.insert(nums.end(),zer.begin(),zer.end());
    }
};