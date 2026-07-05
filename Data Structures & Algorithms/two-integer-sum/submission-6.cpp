class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums; // (value, index)

        for (int i = 0; i < nums.size(); i++) {
            indexedNums.push_back({nums[i], i});
        }

        sort(indexedNums.begin(), indexedNums.end()); // sort by value

        int i = 0, j = nums.size() - 1;
        while (i < j) {
            int sum = indexedNums[i].first + indexedNums[j].first;
            if (sum == target) {
                int index1 = indexedNums[i].second;
                int index2 = indexedNums[j].second;
                if (index1 < index2)
                    return {index1, index2};
                else
                    return {index2, index1};
            } else if (sum < target) {
                i++;
            } else {
                j--;
            }
        }

        return {}; // fallback (though problem guarantees a solution)
    }
};
