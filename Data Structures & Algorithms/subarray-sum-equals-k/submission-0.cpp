class Solution {
public:
   
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int res=0;
        unordered_map<int, int>hash;
        hash[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(hash.find(sum-k)!=hash.end()){
                res+=hash[sum-k];
                hash[sum]++;
            }else{
                hash[sum]++;
            }
        }
        return res;
    }
};