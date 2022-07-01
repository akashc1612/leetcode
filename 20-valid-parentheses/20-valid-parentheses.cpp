class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        if(l ==0)return true;
        if(l%2!=0)return false;
        vector<char> v;
        for(char a:s){
            if(a=='('||a=='{'||a=='['){
                v.push_back(a);continue;
            }
            else if(v.size()==0)return false;
            else if(a==')' && v[v.size()-1]!='(')return false;
            else if(a=='}' && v[v.size()-1]!='{')return false;
            else if(a==']' && v[v.size()-1]!='[')return false;
            v.pop_back();
        }
        if(v.size()==0)return true;
        return false;
    }
};