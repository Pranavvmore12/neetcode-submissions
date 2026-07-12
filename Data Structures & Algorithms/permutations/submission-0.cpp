class Solution {
public:
    void permute(vector<int>&nums, vector<vector<int>>&list1, vector<int>&tempList, vector<bool>&used){
        if(tempList.size()==nums.size()){
            list1.push_back(tempList);
            return;
        }
      
       for(int i=0; i<nums.size(); i++){
            if(used[i]){
                continue;
            }else{
                used[i]=true;
                tempList.push_back(nums[i]);
                permute(nums, list1, tempList, used);
                tempList.pop_back();
                used[i]=false;
            }

       }


    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>list1;
        vector<int>tempList;
        vector<bool> used(nums.size(), false);
        permute(nums, list1, tempList, used);
        return list1;
    }
};
