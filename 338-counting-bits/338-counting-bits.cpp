class Solution {
public:
    int count(int n){
        int a=0;
        while(n){
            if(n&1)a++;
            n>>=1;
        }
        return a;
    }
    vector<int> countBits(int n) {
        vector<int> v(n+1);
        for(int i=0;i<=n;i++)v[i]=count(i);
        return v;
    }
};