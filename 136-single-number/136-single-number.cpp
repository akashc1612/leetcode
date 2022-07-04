class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        unordered_map<int,int> m;
        for(int a:nums){
            if(m.find(a)==m.end())m[a]=1;
            else m[a]++;
        }
        for(auto i:m){
            if(i.second==1)return i.first;
        }
        return -1;
    }
};