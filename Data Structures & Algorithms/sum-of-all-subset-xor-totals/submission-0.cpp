class Solution {
public:
    int sum(vector<int>& nums, int i, int currXor){
       if(i>=nums.size())return currXor;

       return sum(nums, i+1, currXor^nums[i])+ sum(nums, i+1, currXor);

    }
    int subsetXORSum(vector<int>& nums) {
         int currXor=0;
        return sum(nums, 0, currXor);
    }
};