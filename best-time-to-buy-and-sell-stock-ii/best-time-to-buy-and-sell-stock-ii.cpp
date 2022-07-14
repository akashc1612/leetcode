class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long sum=0,s=0;
        long n=prices.size();
        for(int i=1;i<n;i++){
            if(prices[i-1]<prices[i])s=s+prices[i]-prices[i-1];
            else{sum+=s;s=0;}
        }
        sum+=s;
        return int(sum);
    }
};