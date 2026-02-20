// Leetcode : 761  -->  Special Binary String
// * Time Complexity : O(n^2) 
// * Space Complexity : O(n)  
class Solution {
public:
    string makeLargestSpecial(string s) {
        int start = 0;
        int count = 0;
        vector<string> res;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') count++;
            else count--;
            if(count == 0){
                string inner = s.substr(start+1, i-start-1);
                res.push_back("1" + makeLargestSpecial(inner) + "0");
                start = i + 1;
            }
        }
        sort(res.rbegin(), res.rend());
        string ans;
        for(auto &str : res) ans = ans + str;
        return ans;
    }
};
