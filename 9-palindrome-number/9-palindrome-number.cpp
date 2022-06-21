class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        int temp = x,count=0;
        vector <int> v;
        while(temp){
            int t=temp%10;
            v.push_back(t);
            temp=temp/10;
            count++;
        }
        for(int i=0;i<count/2;i++){
            if(v[i]!=v[count-i-1]){return false;}
        }
        return true;
    }
};