class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> m;
        for(auto ch:s)m[ch]++;
        for(auto ch:t){
            if(m.find(ch)==m.end())return ch;
            else{
                if(m[ch]==0)return ch;
                else m[ch]--;
            }
        }
        return 'a';
    }
};