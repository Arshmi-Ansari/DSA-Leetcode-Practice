// Leetcode : 3634  -->  Minimum Removals to Balance Array
// * Time Complexity : O(n log n)  -->  due to sorting
// * Space Complexity : O(log n)  -->  due to sort stack
class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        int j = 0;
        int maxLength = 0;
        while(j < n){
            while((long long)nums[i] * k < (long long)nums[j]){
                i++;
            }
            maxLength = max(maxLength, (j-i+1));
            j++;
        }
        return n - maxLength;
    }
};
