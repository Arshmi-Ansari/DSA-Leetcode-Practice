// Leetcode : 240  -->  Search A 2D Matrix (2)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int rowIndex = 0;
        int colIndex = col - 1;
        while(rowIndex < row && colIndex >= 0){
            int element = matrix[rowIndex][colIndex];
            if(element == target){
                return true;
                break;
            }
            else if(target < element){
                colIndex--;
            }
            else{
                rowIndex++;
            }
        }
        return false;
    }
};
