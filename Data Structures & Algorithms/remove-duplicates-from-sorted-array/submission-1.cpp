class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>hash;
        
        for(int i=0;i<nums.size();i++){
            hash.insert(nums[i]);
        }
        nums.clear();
       for(auto s:hash){
        nums.push_back(s);
       }
        return nums.size();
    }
};