class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> m;
        char a;
        int temp=0;
        for(char a:s){
            if(m.find(a)==m.end())m[a]=1;
            else m[a]++;
        }
        for(int i=0;i<s.length();i++){
            if(m[s[i]]==1)return i;
        }
        return -1;
    }
};