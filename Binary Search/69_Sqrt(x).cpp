class Solution {
public:
    int mySqrt(int x) {
        if(x==1){
            return x;
        }
        int l=0;
        int r=x;
        int a=0;
        while(l<=r){
            int mid=(l+r)/2;
            long long sq=1LL*mid*mid;
            if(sq<=x){
                a=mid;
                l=mid+1;
            }
            else if(sq>x){
                r=mid-1;
            }
            
            
        }
        return a;
    }
};