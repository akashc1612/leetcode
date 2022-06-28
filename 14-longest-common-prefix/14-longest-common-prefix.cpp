class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //Write your code here
        int n = strs.size();
        string a1=strs[0];
        for(int i=1;i<n;i++){
            string a="";
            for(int j=0;j<strs[i].size();j++){
                if(strs[i][j]==a1[j]){a+=a1[j];}
                else break;
            }
            a1=a;
        }
        return a1;
    }
};
