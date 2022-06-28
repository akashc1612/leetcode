class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i=1;i<=numRows;i++){
            vector<int> v1;
            if(i==1){v1.push_back(1);v.push_back(v1);}
            else if(i==2){v1.push_back(1);v1.push_back(1);v.push_back(v1);}
            else{
                v1.push_back(1);
                for(int j=1;j<i-1;j++){
                    v1.push_back(v[i-2][j-1]+v[i-2][j]);
                }
                v1.push_back(1);
                v.push_back(v1);
            }
        }
        return v;
    }
};