// Leetcode : 56  -->  Merge Intervals
// * Time Complexity: O(n log(n))
// * Space Complexity: O(n)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merged;
        vector<int> previous = intervals[0];
        for(int i = 1; i < intervals.size();i++){
            if(intervals[i][0] <= previous[1]){
                previous[1] = max(previous[1],intervals[i][1]);
            }
            else{
                merged.push_back(previous);
                previous = intervals[i];
            }
        }
        merged.push_back(previous);
        return merged;
    }
};
