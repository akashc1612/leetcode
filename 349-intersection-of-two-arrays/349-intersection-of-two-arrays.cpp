class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        for(int i=0;i<nums1.size();i++)m[nums1[i]]++;
        vector<int> v;
        for(int i=0;i<nums2.size();i++){
            if(m.find(nums2[i])==m.end())continue;
            else v.push_back(nums2[i]);
        }
        if(v.size()==0)return {};
        sort(v.begin(),v.end());
        vector<int> ans;
        ans.push_back(v[0]);
        for(int i=1;i<v.size();i++){
            if(v[i-1]!=v[i])ans.push_back(v[i]);
        }
        return ans;
    }
};