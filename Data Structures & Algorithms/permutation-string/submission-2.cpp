class Solution {
public:
 
    bool checkInclusion(string s1, string s2) {
      unordered_map<char, int>hash1;
      unordered_map<char, int>hash2;

      for(int i=0;i<s1.size();i++){
        hash1[s1[i]]++;
      }
      for(int i=0;i<s2.size();i++){
        hash2.clear();
        int idx=i;
        while(idx<i+s1.size() && idx<s2.size()){
            hash2[s2[idx]]++;
            idx++;
        }
        if(hash1==hash2)return true;
      }
      return false;
    }
};
