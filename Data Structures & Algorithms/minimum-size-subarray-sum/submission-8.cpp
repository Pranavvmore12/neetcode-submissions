class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=nums[0];
        int minLen=INT_MAX;
        if(accumulate(nums.begin(),nums.end(),0)<target){
            return 0;
        }
        while(j<nums.size()){
            
            if(sum<target)
            {  
                j++;
                if(j<nums.size())sum+=nums[j];
            }else{
                minLen=min(minLen, j-i+1);
                sum-=nums[i];
                i++;

            }
           
        }
        return minLen;
    }
};