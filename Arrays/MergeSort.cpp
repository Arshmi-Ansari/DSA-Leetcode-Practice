// Leetcode : 912  -->  Sort an Array
// * time Complexity : O(n log(n))
// * Space Complexity : O(n)
class Solution {
void merge(vector<int>& arr, int s, int e){
    int mid = s + (e - s) / 2;
    int length1 = mid - s + 1;
    int length2 = e - mid;
    // creating new Arrays
    int *first = new int[length1];
    int *second = new int[length2];
    // copying the values
    int k = s;
    for(int i = 0; i < length1; i++){
        first[i] = arr[k++];
    }
    k = mid + 1;
    for(int i = 0; i< length2; i++){
        second[i] = arr[k++];
    }
    // merge 2 Sorted Arrays
    int index1 = 0;
    int index2 = 0;
    k = s;
    while(index1 < length1 && index2 < length2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }
    while(index1 < length1){
        arr[k++] = first[index1++];
    }
    while(index1 < length1){
        arr[k++] = second[index2++];
    }
    delete []first;
    delete []second;  
}
void mergeSort(vector<int>& arr, int s, int e){
    if(s >= e){
        return;
    }
    int mid = s + (e - s) / 2;
    // sort left part
    mergeSort(arr,s,mid);
    // sort right part
    mergeSort(arr,mid+1,e);
    // merge Arrays
    merge(arr,s,e);
}
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};
