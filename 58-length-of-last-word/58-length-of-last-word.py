class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.split()
        n = len(s)
        return len(s[n-1])
        
        