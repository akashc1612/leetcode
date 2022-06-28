class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v{nums};
        while(next_permutation(nums.begin(),nums.end()))
            v.push_back(nums);
        return v;
    }
};