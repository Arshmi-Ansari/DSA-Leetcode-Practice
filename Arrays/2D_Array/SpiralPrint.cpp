// Leetcode : 54  -->  Spiral Print
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        // index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = rows-1;
        int endingCol = cols-1;
        // total elements
        int total = rows*cols;
        int count = 0;

        vector<int> ans;
        while(count < total){
            // print strating row
            for(int i = startingCol; count < total && i <= endingCol;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            // print ending column
            for(int i = startingRow; count < total && i <= endingRow;i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            // print ending row
            for(int i = endingCol; count < total && i >= startingCol;i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            // print starting column
            for(int i = endingRow; count < total && i >= startingRow;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
