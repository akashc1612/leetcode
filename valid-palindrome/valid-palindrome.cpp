class Solution {
public:
    bool isPalindrome(string s) {
        
        const long long n = s.size();
        for(int i=0,j=n-1;i<j;){
            if(s[i]>='A'&&s[i]<='Z')s[i]=char(s[i]+32);
            if(s[j]>='A'&&s[j]<='Z')s[j]=char(s[j]+32);
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
                if((s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9')){
                    if(s[i]!=s[j]){return false;}i++;j--;}
                else j--;
            }
            else i++;
        }
        return true;
    }
};