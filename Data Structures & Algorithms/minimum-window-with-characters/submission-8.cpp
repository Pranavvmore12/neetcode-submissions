class Solution {
public:
    bool isPresent(string &sub, string &t){
        unordered_map<char, int>need;
        unordered_map<char, int>have;

        for(int i=0; i<t.size(); i++){
            need[t[i]]++;
        }
        for(int i=0; i<sub.size(); i++){
            have[sub[i]]++;
        }
        for(auto &i: need){
            if(i.second>have[i.first])return false;
        }
    return true;

    }

    string minWindow(string s, string t) {

        int minLength=INT_MAX;
        string ans;
            int i=0;
            int j=0;
            while(j<s.size() && j>=i){
                string sub=s.substr(i,j-i+1);
                if(isPresent(sub, t)){
                    if(sub.size()<minLength){
                        ans=sub;
                        minLength=sub.size();
                    }
                    i++;
                }else{
                    j++;
                }
            }
         
        return ans;
    }
};
