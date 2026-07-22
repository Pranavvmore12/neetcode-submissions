class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i=0;
        int j=arr.size()-1;
        vector<int>ans;

        while((j-i+1)>k){
            if(abs(arr[i] - x) > abs(arr[j] - x)){
                i++;
            }else{
                j--;
            }
        }
        for(int it=i;it<=j;it++){
            ans.push_back(arr[it]);
        }
        return ans;
    }
};