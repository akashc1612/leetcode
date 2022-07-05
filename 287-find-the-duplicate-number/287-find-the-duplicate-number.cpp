class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto a:nums){
            if(m.find(a)==m.end())m[a]=1;
            else{
                return a;
            }
        }
        return -1;
    }
};