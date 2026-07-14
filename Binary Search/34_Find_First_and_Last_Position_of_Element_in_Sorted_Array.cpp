class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>a;
        int n=nums.size();
        int l=0;
        int r=n-1;
        int b=-1;
        int c=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                b=mid;
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        l=0;
        r=n-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                c=mid;
                l=mid+1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        a.push_back(b);
        a.push_back(c);
        return a;
        
    }
};