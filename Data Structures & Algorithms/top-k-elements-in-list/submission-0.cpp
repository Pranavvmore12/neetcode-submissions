class Solution {
public:
    static bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
     

        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        vector<pair<int,int>>ans(hash.begin(),hash.end());

        sort(ans.begin(),ans.end(),cmp);
        vector<int>finaAns;

        for(int i=0;i<k;i++){
           finaAns.push_back(ans[i].first);
        }
        return finaAns;
    }
};
