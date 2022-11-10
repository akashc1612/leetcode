class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n = matrix[0].size();
        int low=0;
        int high = n-1;
        if(n==1 && m==1){
            if(matrix[0][0]==target)return true;
            else return false;
        }
        if (matrix.empty())
            return false;
        int l = 0;
        int r = m * n;
        while (l < r) {
            const int mid = (l + r) / 2;
            const int i = mid / n;
            const int j = mid % n;
            if (matrix[i][j] == target)
                return true;
            if (matrix[i][j] < target)
                l = mid + 1;
            else
                r = mid;
        }
    return false;
    }
};