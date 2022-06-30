class Solution {
public:
    bool isHappy(int n) {
      auto getNext = [](int x) -> int {
      int ans = 0;
      while (x) {
        ans += (x % 10) * (x % 10);
        x /= 10;
      }
      return ans;
    };
    
    unordered_set<int> s;
    while (n != 1) {
      if (!s.insert(n).second) return false;
      n = getNext(n);
    }
    return true;
    }
};