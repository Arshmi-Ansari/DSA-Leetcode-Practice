// Leetcode : 557  -->  Reverse Words in a String 2
// * Time Complexity : O(n
// * Space Complexity : O(1)
class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        int r = 0;
        while(l < s.length()){
            while(r < s.length() && s[r] != ' '){
                r++;
            }
            reverse(s.begin()+l, s.begin()+r);
            l = r + 1;
            r = l;
        }
        return s;
    }
};
