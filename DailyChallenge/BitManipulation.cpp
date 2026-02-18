// Leetcodde : 693  -->  Binary Number with Alternating bits
// Time Complexity : O(log n)
// Space Complexity : O(1)
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = -1;
        while(n > 0){
            int bit = n % 2;
            if(bit == prev){
                return false;
            }
            prev = bit;
            n = n>>1;
        }
        return true;
    }
};
