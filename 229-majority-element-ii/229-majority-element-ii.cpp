class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        const int n = floor(nums.size()/3);
        map<int,int> m;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto it:m){
            if(it.second>n)v.push_back(it.first);
        }
        return v;
    }
};