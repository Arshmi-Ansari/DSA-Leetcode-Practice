// Leetcode : 443  -->  String Compression
class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansidx = 0;
        int n = chars.size();
        while(i < n){
            int j = i + 1;
            while(j < n && chars[j] == chars[i]){
                j++;
            }
            // storing the old character
            chars[ansidx++] = chars[i];

            // counting the occurrence of old charachter
            int count = j - i;

            if(count > 1){
            // converting the counting into single digit and storing in ansidx
                string cnt = to_string(count);
                for(char ch : cnt){
                    chars[ansidx++] = ch;
                }
            }
            // moving to new character
            i = j;
        }
        return ansidx;
    }
};
