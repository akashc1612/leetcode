class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> v;
        while(k){
            int temp = k%10;
            v.push_back(temp);
            k=k/10;
        }
        for(int i=0,j=v.size()-1;i<j;i++,j--){
            swap(v[i],v[j]);
        }
        int carry =0 ;
        vector<int> ans;
        for(int i=0;i<max(num.size(),v.size());i++){
            if(i<num.size()){
                carry = carry + num[num.size()-i-1];
            }
            if(i<v.size()){
                carry = carry + v[v.size()-i-1];
            }
            int t = carry%10;
            ans.push_back(t);
            carry=carry/10;
        }
        if(carry){
            int t=carry%10;
            ans.push_back(t);
            carry=carry/10;
        }
        for(int i=0,j=ans.size()-1;i<j;i++,j--){
            swap(ans[i],ans[j]);
        }
        return ans;
    }
};