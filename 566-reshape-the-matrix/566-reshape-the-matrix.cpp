class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c)return mat;
        vector<vector<int>> v;
        int a=0;
        int b=0;
        for(int i=0;i<r;i++){
            vector<int> v1;
            for(int j=0;j<c;j++){
                v1.push_back(mat[a][b++]);
                if(b == n){b=0;a++;}
            }
            v.push_back(v1);
        }
        return v;
    }
};