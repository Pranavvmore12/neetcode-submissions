class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        
        int i=0;
        int j=k-1;
        while(j<nums.size() && j>=i){
            vector<int>temp;
            for(int l=i; l<=j; l++){
                temp.push_back(nums[l]);
            }

            ans.push_back(*max_element(temp.begin(), temp.end()));
            temp.clear();
            i++;j++;
        }
        return ans;
    }
};
