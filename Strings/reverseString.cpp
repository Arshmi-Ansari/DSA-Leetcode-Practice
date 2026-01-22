#include <vector>
#include <algorithm>
using namespace std;

/*
    LeetCode Problem: 344. Reverse String

    Approach:
    - Two Pointer Technique
    - One pointer at start, one at end
    - Swap characters until pointers meet

    Time Complexity: O(n)
    Space Complexity: O(1) (in-place)
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left++], s[right--]);
        }
    }
};
