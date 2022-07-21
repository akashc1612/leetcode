class Solution {
public:
    int solve(int n){
        int sum=0;
        while(n){
            sum=sum+n%10;
            n=n/10;
        }
        return sum;
    }
    int addDigits(int num) {
        if(num<10)return num;
        else{
            while(num>=10){num=solve(num);}
        }
        return num;
    }
};