#include<bits/stdtr1c++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(auto x: arr){
            freq[x]++;
        }
        unordered_set<int> set;
        for(auto y: freq){
            if(set.count(y.second)){
                return false;
            }
            set.insert(y.second);
        }
        return true;
    }
};
int main(){
    Solution s;
    vector<int> arr = {1,2,2,1,1,3};
    cout<<s.uniqueOccurrences(arr);
    return 0;
}
