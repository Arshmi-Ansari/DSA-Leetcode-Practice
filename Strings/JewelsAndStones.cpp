// Leetcode : 771  -->  Jewels And Stones
// * Time Complexity : O(n+m)   // n --> length of jewels ,  m --> length of stones
// * Space Complexity : O(n)
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> j;
        for(char ch : jewels){
            j.insert(ch);
        }
        int count = 0;
        for(char ch : stones){
            if(j.find(ch) != j.end()) count++;
        }
        return count;
    }
};
