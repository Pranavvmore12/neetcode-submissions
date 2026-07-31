class Solution {
public:
    int maxi(vector<int>& height, int start, int end){
        if (start > end) return 0;
        int maxElement=INT_MIN;
        for(int i=start; i<=end; i++){
                maxElement=max(maxElement, height[i]);
        }
        return maxElement;
    }
    int trap(vector<int>& height) {
        vector<int>water;
        for(int i=0;i<height.size();i++){
            if((min(maxi(height, 0, i-1), maxi(height, i+1, 
            height.size()-1))-height[i])<0){
                water.push_back(0);
            }else{
                water.push_back(min(maxi(height, 0, i-1), maxi(height, i+1, 
            height.size()-1))-height[i]);
            }
        }
        return accumulate(water.begin(), water.end(), 0);
    }
};
