// * Time Complexity : O(log n)
// * Space Complexity : O(1)
class Solution {
public:
    int binaryGap(int n) {
        int prev = -1;
        int ans = 0;
        int count = 0;
        while(n > 0){
            int d = n % 2;
            if (d == 1){
                if(prev != -1 ){
                    ans = max(ans, count - prev);
                }
                prev = count;
            }
            count++;
            n = n / 2;
        }
        return ans;
    }
};
