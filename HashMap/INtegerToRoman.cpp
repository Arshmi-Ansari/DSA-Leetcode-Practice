// Leetcode : 12  -->  Integer to Roman
// * Time Complexity : O(1)
// * Space Complexity : O(1)
class Solution {
public:
    string intToRoman(int num) {
        vector<int> arr = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> arrs = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans;
        for(int i = 0; i < arr.size(); i++){
            while(num >= arr[i]){
                ans = ans + arrs[i];
                num -= arr[i];
            }
        }
        return ans;
    }
};
