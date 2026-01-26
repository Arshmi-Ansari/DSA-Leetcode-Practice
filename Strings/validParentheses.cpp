// Leetcode : 20  -->  Valid Parentheses
class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for(int i = 0;i<s.length();i++){
            char ch = s[i];
            if(ch == '(' || ch == '[' || ch == '{'){
                str.push(ch);
            }
            else{
                if(str.empty()) return false;
                
                char top = str.top();
                str.pop();
                
                if( (ch == ')' && top != '(') ||
                    (ch == ']' && top != '[') ||
                    (ch == '}' && top != '{')){
                        return false;
                }
            }
        }
        return str.empty();
    }
};
