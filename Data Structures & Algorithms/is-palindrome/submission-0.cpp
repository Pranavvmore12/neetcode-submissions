class Solution {
public:
    void reverse(string &s){   // pass by reference
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    bool isPalindrome(string s) {
        string filtered;
        for(auto i:s){
            if(isalnum(i)){
                filtered.push_back(tolower(i));
            }
        }
        string rev=filtered;
        int i=0;
        int j=filtered.size()-1;
        while(i<j){
            swap(rev[i],rev[j]);
            i++;j--;
        }
        if(rev==filtered)return true;return false;
    }
};
