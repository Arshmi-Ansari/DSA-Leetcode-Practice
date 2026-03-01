// Leetcode : 1689  -->  Partitioning Into Moinimum Number of Deci-Binary Numbers
// * Time Complexity : O(n)
// *Space Complexity : O(1)
class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(int i = 0; i < n.size(); i++){
            ans = max((n[i] - '0'), ans);
        }
        return ans;
    }
};
