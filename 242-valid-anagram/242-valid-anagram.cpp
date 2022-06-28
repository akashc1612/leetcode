class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m,m1;
        for(char a:t){
            if(m.find(a)==m.end())m[a]==1;
            else m[a]++;
        }
        for(char a:s){
            if(m1.find(a)==m1.end())m1[a]==1;
            else m1[a]++;
        }
        for(auto i:m){
            if(m1.find(i.first)==m1.end())return false;
            else{
                if(m1[i.first]!=i.second)return false;
            }
        }
        for(auto i:m1){
            if(m.find(i.first)==m.end())return false;
            else{
                if(m[i.first]!=i.second)return false;
            }
        }
        return true;
    }
};