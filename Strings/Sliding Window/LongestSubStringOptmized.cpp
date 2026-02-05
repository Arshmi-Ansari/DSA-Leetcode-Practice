// Leetcode : 3  -->   Longest Substring Without Repeating Characters
// * Time Complexity :  O(n).
// * Space Complexity :  O(1).
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> freq(256,0);
        int maxLength = 0;
        int i = 0;
        for(int j = 0; j < n; j++){
            freq[s[j]]++;
            while(freq[s[j]] > 1){
                freq[s[i]]--;
                i++;
            }
            maxLength = max(maxLength, j-i+1 );
        }
        return maxLength;
    }
};
