class Solution {
public:
    int distributeCandies(vector<int>& c) {
        const int n=c.size();
        map<int,int> m;
        for(auto i:c)m[i]++;
        if(m.size()>=n/2)return n/2;
        return m.size();
    }
};