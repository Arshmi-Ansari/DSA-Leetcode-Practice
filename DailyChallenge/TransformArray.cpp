// Leetcode : 3379  -->  Transformed Array
// * Time Complexity :  O(n).
// * Space Complexity :  O(n).
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i  = 0;i < n; i++){
            // circular indexing
            ans.push_back(nums[((i + nums[i])%n + n) % n]);
        }
        return ans;
    }
};
