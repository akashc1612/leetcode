class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> v=score;
        const int n=score.size();
        sort(v.begin(),v.end());
        map<int,string> m;
        for(int i=n-1;i>=0;i--){
            if(i==n-1)m[v[i]]="Gold Medal";
            else if(i==n-2)m[v[i]]="Silver Medal";
            else if(i==n-3)m[v[i]]="Bronze Medal";
            else m[v[i]]=to_string(n-i);
        }
        vector<string> ans;
        for(int i=0;i<n;i++){
            ans.push_back(m[score[i]]);
        }
        return ans;
    }
};