class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          unordered_map<string, vector<string>>hash;
          for(auto s:strs){
            string key=s;
            sort(key.begin(), key.end());
            hash[key].push_back(s);
          }
          vector<vector<string>>ans;
          for(auto i: hash){
            ans.push_back(i.second);
          }
          
    return ans;
    }
};
