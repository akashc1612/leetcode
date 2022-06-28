class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m,m1;
        for(char a:ransomNote){
            if(m.find(a)==m.end())m[a]==1;
            else m[a]++;
        }
        for(char a:magazine){
            if(m1.find(a)==m1.end())m1[a]==1;
            else m1[a]++;
        }
        for(auto i:m){
            if(m1.find(i.first)==m1.end())return false;
            else{
                if(m1[i.first]<i.second)return false;
            }
        }
        return true;
    }
};