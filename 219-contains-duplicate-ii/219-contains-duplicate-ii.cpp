class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        for(auto it:m){
            if(it.second.size()>1){
                int n= it.second.size();
                for(int i=1;i<n;i++){
                    if((it.second[i]-it.second[i-1])<=k)return true;
                }
            }
        }
        return false;
    }
};