class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=-1;
        int b=-1;
        vector<int> v{a,b};
        if(nums.size()==0)return v;
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid=low + (high-low)/2;
            if(nums[mid]==target){
                while(nums[mid]==target){
                    a=mid;
                    mid--;
                    if(mid<0)break;
                }
                mid++;
                while(nums[mid]==target){
                    b=mid;
                    mid++;
                    if(mid>nums.size()-1)break;
                }
                break;
            }
            else if(nums[mid]>target)high=mid-1;
            else low=mid+1;
        }
        vector<int> v1{a,b};
        return v1;
    }
};