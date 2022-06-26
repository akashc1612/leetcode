class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> se;
        for(auto i:nums){
            se.insert(i);
        }
        int i=1;
        while(i<=n){
            if(se.count(i)==0)return i;
            i++;
        }
        return i;
    }
};