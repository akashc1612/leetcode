class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int x=0,f=0;
        for(int i=0;i<s.size();i++){
            if(m.count(s[i])!=0){
                f = max(f,m[s[i]]+1);
            }
            m[s[i]]=i;
            x = max(x,i-f+1);
        }
        return x;
    }
};