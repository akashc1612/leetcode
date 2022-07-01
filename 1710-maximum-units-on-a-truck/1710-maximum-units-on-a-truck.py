class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        boxTypes.sort(key=lambda x: -x[1])
        ans = 0
        for t, u in boxTypes:
            if truckSize > t:
                truckSize -= t
                ans += t * u
            else:
                ans += truckSize * u
                return ans
        return ans