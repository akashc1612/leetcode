class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a=0,b=0;
        int s = nums1.size();
        vector<int> v(s);
        if(n==0){
            return;
        }
        if(m==0){
            for(int i=0;i<n;i++)nums1[i]=nums2[i];
            return;
        }
        for(int i=0;i<s;i++){
            if(a==m){
                for(int j=i;j<s;j++)v[j]=nums2[b++];
                break;
            }
            if(n==0)break;
            if(b==n){
                for(int j=i;j<s;j++)v[j]=nums1[a++];break;
            }
            if(nums1[a]>nums2[b]){
                v[i]=nums2[b];
                b++;
            }
            else{
                v[i]=nums1[a];
                a++;
            }
        }
        for(int i=0;i<s;i++){
            nums1[i]=v[i];
        }
    }
};