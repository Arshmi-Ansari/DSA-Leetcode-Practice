// Leetcode : 4  -->  Median Of Two Sorted Arrays
// * Time Complexity : O(n1 + n2)
// * Space Complexity : O(1)
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() ; int n2 = nums2.size();
        int i = 0;
        int j = 0;
        int n = n1 + n2;
        int index2 = n/2;
        int index1 = index2 - 1;
        int count = 0;
        int index1El = -1; int index2El = -1;
        while(i < n1 && j < n2){
            if(nums1[i] < nums2[j]){
                if(count == index1) index1El = nums1[i];
                if(count == index2) index2El = nums1[i];
                count++;
                i++;
            }
            else{
                if(count == index1) index1El = nums2[j];
                if(count == index2) index2El = nums2[j];
                count++;
                j++;
            }
        }
        while(i < n1){
            if(count == index1) index1El = nums1[i];
            if(count == index2) index2El = nums1[i];
            count++;
            i++;
        }
        while(j < n2){
            if(count == index1) index1El = nums2[j];
            if(count == index2) index2El = nums2[j];
            count++;
            j++;
        }
        if(n % 2 == 1){
            return index2El;
        }
        else{
            return (double)((double)(index1El + index2El)) / 2.0;
        }
    }
};
