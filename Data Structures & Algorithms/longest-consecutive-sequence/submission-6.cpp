class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        
        vector<int> out(nums.size(),0);
        for(int i=0; i<nums.size()-1; i++){
            out[i]=nums[i+1]-nums[i];
        }
          int longest = 1;
        int current = 1;
        for(int i=0; i<out.size(); i++){
            if(out[i] == 0) {
                continue; // skip duplicates
            }
            else if(out[i] == 1) {
                current++;
                longest = max(longest, current);
            }
            else {
                current = 1; // reset streak
            }
        }
        return longest;
    }
};
