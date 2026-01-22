// Leetcode : 125  -->  valid palindrome
class Solution {
private: 
    bool valid(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }
    char toLowercase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            // ch >= 'A' && ch <= 'Z'
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
public:
    bool isPalindrome(string s) {
        string temp = "";
            // remove extra charachter
        for(int i = 0;i<s.length();i++){
            if(valid(s[i])){
            // add valid charachters into temp string
                temp.push_back(s[i]);
            }
        }
        for(int i = 0;i<temp.length();i++){
            // convert to lower case using function toLowercase
            temp[i] = toLowercase(temp[i]);
        }
            // check palindrome
        int st = 0; int e = temp.length()-1;
        while(st<e){
            if(temp[st] != temp[e]){
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
};
