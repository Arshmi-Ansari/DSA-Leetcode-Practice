// Leetcode : 18  -->  4Sum
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> ans;
        if(n < 4) return ans;
        for(int i = 0; i < n-3; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j < n-2; j++){
                if(j > i+1 && nums[j] == nums[j-1]) continue;
                int l = j+1; int r = n-1;
                while(l < r ){
                    long long sum = 1ll * nums[i] + nums[j] + nums[l] + nums[r];
                    if(sum == target){
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        int leftVal = nums[l];
                        int rightVal = nums[r];
                        while(l < r && nums[l] == leftVal){
                            l++;
                        }
                        while(l < r && nums[r] == rightVal){
                            r--;
                        }
                    }
                    else if(sum < target){
                        l++;
                    }
                    else{ // sum > target
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};
