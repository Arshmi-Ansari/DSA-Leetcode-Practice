// Leetcode : 1461  -->  Check if String Contains All Binary Codes of Size K
// * Time Complexity: O(n * k)
// * Space Complexity: O(k * 2^k)
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> str;
        for(int i = 0; i+k <= s.size(); i++){
            str.insert(s.substr(i,k));
        }
        return str.size() == 1 << k;
    }
};
