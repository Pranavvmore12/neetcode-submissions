class Solution {
public:
    void permute(vector<int>&nums, vector<vector<int>>&list1, vector<int>&tempList, int i){
        if(i>=nums.size()){
            list1.push_back(tempList);
            return;
        }
        tempList.push_back(nums[i]);
        permute(nums, list1, tempList, i+1);
        tempList.pop_back();
        permute(nums, list1, tempList, i+1);


    }
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<int>tempList;
     vector<vector<int>>list1;
     permute(nums, list1 ,tempList, 0);
     return list1;
    }
};
