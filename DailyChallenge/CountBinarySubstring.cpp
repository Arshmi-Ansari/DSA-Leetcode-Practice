// Leetcode : 696  -->  Count Binary Substrings
// * Time Complexity : O(n)
// * Space Complexity : O(n)
class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> group;
        int n = s.size();
        int count = 1;
        for(int i = 1; i < n ; i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                group.push_back(count);
                count = 1;
            }
        }
        group.push_back(count);
        int ans = 0;
        for(int i = 0; i+1 < group.size(); i++){
            ans = ans + min(group[i], group[i+1]);
        }
        return ans;
    }
};
