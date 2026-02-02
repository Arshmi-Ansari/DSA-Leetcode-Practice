// Leetcode : 11  -->  Container With Most Water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        while(i < j){
            int width = j - i;
            int Area = width * min(height[i],height[j]);
            ans = max(Area,ans);
            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};
