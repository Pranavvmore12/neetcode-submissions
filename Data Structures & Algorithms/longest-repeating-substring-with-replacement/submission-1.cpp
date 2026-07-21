class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[26]={0};

        int i=0;
        int j=0;
        int maxWindSize=0;

        while(j<s.size()){
            freq[s[j]-'A']++;
            int maxFreq=*max_element(freq, freq + 26);
            int windSize=j-i+1;
            if(abs(maxFreq-windSize)<=k){
                 maxWindSize=max(maxWindSize, windSize);
                j++; 
               
            }
            else{
                 freq[s[i]-'A']--;
                i++;
                j++;
               
               
                
            }
           
        }
      
        return maxWindSize;


    }
};
