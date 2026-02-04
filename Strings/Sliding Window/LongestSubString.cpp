// Leetcode : 3  -->  Longest Substring Without Repeating Characters
// * Time Complexity :  O(n).
// * Space Complexity :  O(n).
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> window ;
        int maxLength = 0;
        int i = 0;
        for(int j = 0; j < n; j++){
            while(window.count(s[j])){
                window.erase(s[i]);
                i++;
            }
            window.insert(s[j]);
            maxLength = max(maxLength, j-i+1 );
        }
        return maxLength;
    }
};
