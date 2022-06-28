class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> m;
        for(char a:s){
            if(m.find(a)==m.end()){
                m[a]=1;
            }
            else{
                m[a]++;
            }
        }
        vector<int> v;
        for(auto it=m.begin();it!=m.end();it++){
            v.push_back(it->second);
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=1;i<v.size();i++){
            if(v[i]==v[i-1]&&(v[i]!=0)){
                v[i]--;
                ans++;
                sort(v.begin(),v.end());
                i=0;
            }
        }
        return ans;
    }
};