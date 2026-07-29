class Solution {
public:
static bool cmp(int a, int b){
    return a>b;
}
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        for(int i=0; i<k; i++){
            if(i==k-1){
                return q.top();
            }else{
                q.pop();
            }
        }
        return -1;
    }
};
