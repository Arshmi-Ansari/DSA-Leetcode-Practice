// Leetcode : 66  -->  Plus One
// * Time Complexity : O(n)
// * Space Complexity : O(1)
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int i = n-1; int carry = 1;
        while(i >= 0){
            int digit = (carry + digits[i]) % 10;
            carry = (carry + digits[i] ) / 10;
            digits[i] = digit;
            i--;
        }
        if(carry) digits.insert(digits.begin(),1);
        return digits;
    }
};
