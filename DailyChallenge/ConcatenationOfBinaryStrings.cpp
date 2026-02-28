// Leetcode : 1680  --> Concatenation of Consecutive Binary Numbers
// * Time Complexity : O(n)
// * Space Complexity : O(1)
class Solution {
public:
    int concatenatedBinary(int n) {
        const int MOD = 1e9+7;
        long long ans = 0;
        for(int i = 1; i <= n ; i++){
            int length = log2(i) + 1;
            ans = ((ans << length) + i) % MOD;
        }
        return ans;
    }
};
