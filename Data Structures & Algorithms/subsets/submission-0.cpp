class Solution {
public:
    void subsets(vector<int> &nums, vector<int> &tempList, vector<vector<int>> &list1, int start){
        list1.push_back(tempList);
        
        for(int i=start; i<nums.size(); i++){
            tempList.push_back(nums[i]);
            subsets(nums, tempList, list1, i+1);
            tempList.pop_back();
        }

    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<int>tempList;
     vector<vector<int>>list1;
     subsets(nums, tempList, list1, 0);
     return list1;
    }
};
