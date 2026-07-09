class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> out(nums.size());
        for(int i=0;i<nums.size();i++){
            int prod=1;
            for(int j=0; j<i; j++){
                prod*=nums[j];
            }
            for(int j=i+1; j<nums.size(); j++){
                prod*=nums[j];
            }
            out[i]=prod;
        }
        return out;
    }
};
