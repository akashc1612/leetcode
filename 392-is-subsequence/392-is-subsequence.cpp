class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=0;
        if(s.size()==t.size()){
            if(s==t)return true;
            return false;
        }
        for(int i=0;i<t.size();i++){
            if(s[a]==t[i]){a++;}
            if(a==s.size())return true;
        }
        return false;
    }
};