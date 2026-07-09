class Solution {
public:
    void merge(vector<int>&arr, int i, int j, int mid){
        int n1=mid-i+1;
        int n2=j-mid;

         
        vector<int> left(n1);
        vector<int> right(n2);

        for(int k=0;k<n1;k++)left[k]=arr[k+i];
        for(int k=0;k<n2;k++)right[k]=arr[mid+k+1];

        int dava=0; int ujwa=0; int k=i;
        while(dava<n1 && ujwa<n2){
            if(left[dava]<right[ujwa]){
                arr[k++]=left[dava++];
            }else{
                arr[k++]=right[ujwa++];
            }
        }
        while (dava < n1) arr[k++] = left[dava++];
        while (ujwa < n2) arr[k++] = right[ujwa++];

    }

    vector<int> mergeSort(vector<int>&arr, int i, int j){
       if(i<j){
            int mid=(i+j)/2;
            mergeSort(arr, i, mid);
            mergeSort(arr, mid+1, j);
            merge(arr,i,j,mid);

        }
        return arr;
    }
    vector<int> sortArray(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};