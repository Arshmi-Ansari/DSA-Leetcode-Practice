// Leetcode : 3637  -->  Trionic Array 1
// Time Complexity : O(n)
// Space Complexity : O(1)
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int i = 1;
        if(n < 4) return false;
        // strictly increasing
        while(i < n && nums[i] > nums[i-1]){
           i++;
        }
        if(i == 1 || i == n) return false;
        // strictly decreasing
        int j = i;
        while(j < n && nums[j] < nums[j-1]){
            j++;
        }
        if(j == i || j == n) return false;
        // strictly increasing
        int k = j;
        while(k < n && nums[k] > nums[k-1]){
            k++;
        }
        if(k == n) return true;
        else return false;
    }
};
