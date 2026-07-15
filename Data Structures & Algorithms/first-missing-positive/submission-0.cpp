class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         for(int i=0;i<nums.size();i++){
            if(nums[i]<=0 || nums[i]>nums.size()){
                nums[i]=nums.size()+1;
            }
         }
         for(int i=0;i<nums.size();i++){
            int num=abs(nums[i]);
            if(num>nums.size() || num<1){
                continue;
            }
            if(num >= 1 && num <= nums.size()){
            nums[num-1]=-abs(nums[num-1]);
            }
         }
         for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                return i+1;
            }
         }
         return nums.size()+1;

    }
};