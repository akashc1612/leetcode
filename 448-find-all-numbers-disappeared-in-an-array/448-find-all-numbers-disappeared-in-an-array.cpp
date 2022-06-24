class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        int n= nums.size();
        auto it=unique(nums.begin(),nums.end());
        nums.resize(distance(nums.begin(),it));
        int j=1;
        it=nums.begin();
        for(;j<=n;j++){
            if(j!=*it){
                v.push_back(j);
            }
            else{it++;}
        }
        return v;
    }
};