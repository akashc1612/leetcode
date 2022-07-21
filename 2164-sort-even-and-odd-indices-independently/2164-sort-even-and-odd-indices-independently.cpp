class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> f;
        vector<int> l;
        for(int i=0;i<nums.size();i++){
            if(i%2==0)f.push_back(nums[i]);
            else l.push_back(nums[i]);
        }
        sort(f.begin(),f.end());
        sort(l.begin(),l.end());
        int n = l.size();
        int a = 0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){nums[i]=f[a];a++;}
            else {nums[i]=l[n-1];n--;}
        }
        return nums;
    }
};