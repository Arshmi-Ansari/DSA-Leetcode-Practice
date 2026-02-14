// Leetcode : 6  -->  Zigzag Conversion
// * Time complexity : O(n)
// * Space Complexity : O(n)
class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        if(numRows == 1 || numRows >= n) return s;
        vector<string> rows(numRows);
        int row = 0;
        bool down = true;
        for(char ch : s){
            rows[row].push_back(ch);
            if(row == 0) down = true;
            if(row == numRows - 1) down = false;
            if(down) row++;
            else row--;
        }
        // adding the strings
        string ans = "";
        for(string r : rows){
            ans = ans + r;
        }
        return ans;
    }
};
