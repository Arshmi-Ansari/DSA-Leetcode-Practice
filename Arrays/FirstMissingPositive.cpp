// Leetcode : 41  --> First Missing Positive
// * Time Complexity : O(n)
// * Space Complexity : O(n)
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> dummy(nums.begin(), nums.end());
        for(int i = 1; i <= nums.size()+1; i++){
            if(!dummy.count(i)) return i;
        }
        return 0;
    }
};
