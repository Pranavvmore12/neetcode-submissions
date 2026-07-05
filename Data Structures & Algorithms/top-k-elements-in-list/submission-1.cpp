class Solution {
public:
    static bool cmp(const pair<int,int>&a, const pair<int,int>&b){
       return a.second>b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>hash;
       for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
       }
       vector<pair<int,int>>hashAns(hash.begin(),hash.end());
    sort(hashAns.begin(),hashAns.end(),cmp);
    
    vector<int>ans;
    for(int i=0;i<k;i++){
        ans.push_back(hashAns[i].first);
    }
     return ans;

    }
};
