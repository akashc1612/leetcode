class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> v;
        sort(begin(people), end(people), [](const auto& a, const auto& b) {
        return a[0] == b[0] ? a[1] < b[1] : a[0] > b[0];});
        for(const auto it : people)
        v.insert(begin(v) + it[1], it);
        return v;
    }
};