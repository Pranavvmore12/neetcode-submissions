class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int, int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>> forCount(hash.begin(),hash.end());
        vector<int>ans;
        for(auto i: forCount){
            if(i.second>nums.size()/3){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};