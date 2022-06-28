class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<=1)return 0;
        vector<int> v(n-1,0);
        for(int i=0;i<n-1;i++){
            v[i]=prices[i+1]-prices[i];
        }
        int max1 = max(0,v[0]);
        for(int i=1;i<n-1;i++){
            if(v[i-1]>0)
                v[i]= v[i]+v[i-1];
            max1 = max(v[i],max1);
        }
        return max1;
    }
};