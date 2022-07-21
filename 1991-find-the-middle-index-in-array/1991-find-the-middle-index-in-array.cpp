class Solution {
public:
    vector<int> v;
    int check(int n){
        if(n<0)return 0;
        int sum1=0,sum2=0;
        for(int i=0;i<v.size();i++){
            if(i<n)sum1=sum1+v[i];
            else if(i>n)sum2=sum2+v[i];
        }
        if(sum1==sum2)return 1;
        else if(sum1>sum2)return 0;
        return -1;
    }
    int findMiddleIndex(vector<int>& n) {
        if(n.size()==1)return 0;
        v=n;
        for(int i=0;i<n.size();i++){
            if(check(i)==1)return i;
        }
        return -1;
    }
};