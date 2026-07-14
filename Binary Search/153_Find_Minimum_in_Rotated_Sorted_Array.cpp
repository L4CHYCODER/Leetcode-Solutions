class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int mn=INT_MAX;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[l]<=nums[r]){
                mn=min(nums[l],mn);
                break;
            }
            if(nums[l]<=nums[mid]){
                mn=min(nums[l],mn);
                l=mid+1;
            }
            else{
                mn=min(nums[mid],mn);
                r=mid-1;
            }
            
        }
        return mn;
    }
};