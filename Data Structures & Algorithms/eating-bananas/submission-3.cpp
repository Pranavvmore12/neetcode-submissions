class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
     int ans=*max_element(piles.begin(),piles.end());
        for(int i=1; i<=ans; i++){
          long long hours=0;
               for(int pile: piles){
                    hours+=(pile + i - 1) / i;
               }
               if(hours<=h){
                    return i;
               }
        }
        return ans;
    }
};
