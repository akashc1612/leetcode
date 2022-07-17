class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i])v.push_back(nums[i]);
        }
        sort(v.begin(),v.end());
        if(v.size()<3)return v[v.size()-1];
        return v[v.size()-3];
    }
};