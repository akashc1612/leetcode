class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1]<9){
            digits[n-1]++;
            return digits;
        }
        int carry=1;
        for(int i=n-1;i>=0;i--){
            carry+=digits[i];
            digits[i]=carry%10;
            carry/=10;
        }
        if(carry>0)digits.insert(digits.begin(),carry);
        return digits;
    }
};