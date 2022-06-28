class Solution {
public:
    int reverse(int x) {
        long a1=0,x2;
        if(x>=0){a1=0; x2=x;}
        else{a1=1; x2=long(x)*-1;}
        string a=to_string(x2);
        reversestring(a,a.length()-1,0);
        long x1 = atol(a.c_str());
        if(a1==0){x1=x1;}
        else{x1=-1*x1;}
        if(x1>(pow(2,31)-1))return 0;
        if(x1<(-1*pow(2,31)))return 0;
        return int(x1);
        
    }
    void reversestring(string& s,int n,int i){
        if(n<=i)return;
        swap(s[i],s[n]);
        reversestring(s,n-1,i+1);
    }
};