class Solution {
public:
    long long mySqrt(int x) {
        long long start=0;
        long long end=x/2;
        long long ans=0;
        if(x==1)return 1;
        while(start<=end){
            long long mid=(start+end)/2;
            long long prod=mid*mid;
            if(prod==x){
                return mid;
            }
            else if(prod<x){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        return ans;
    }
};