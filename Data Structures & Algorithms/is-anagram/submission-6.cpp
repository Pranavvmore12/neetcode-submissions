class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t){
        //     return true;
        // }
        // return false;
        unordered_map<char, int> hash;
          if(s.size() != t.size()) return false;

        for(char c : s) {
            hash[c]++;
        }
        
        for(char c : t) {
            hash[c]--;
            if(hash[c] < 0) return false; // More occurrences in t than s
        }

        return true;

    }
};
