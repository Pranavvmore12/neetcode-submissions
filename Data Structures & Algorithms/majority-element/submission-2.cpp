class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>>pairArr(hash.begin(),hash.end());

        for(auto i: pairArr){
            if(i.second>nums.size()/2){
                return i.first;
            }
        }
        return 0;
      

    }
};