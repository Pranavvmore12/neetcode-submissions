class Solution {
public:
 void subsets(vector<int> &nums, vector<int> &tempList, vector<vector<int>> &list1, int start){
        list1.push_back(tempList);
        
        for(int i=start; i<nums.size(); i++){
            if(i>start && nums[i]==nums[i-1]){
                continue;
            }else{
                tempList.push_back(nums[i]);
                subsets(nums, tempList, list1, i+1);
                tempList.pop_back();
            }
            
        }

    
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>tempList;
        vector<vector<int>>list1;
        sort(nums.begin(), nums.end()); 
        subsets(nums, tempList, list1, 0);
        return list1;
    }
};
