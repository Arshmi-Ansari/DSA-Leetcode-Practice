// Leetcode : 567  -->  Permutation in String
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length(), n2 = s2.length();

        if(n1 > n2) return false;

        int count1[26] = {0};
        int count2[26] = {0};

        for(int i = 0;i<n1;i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        for(int i = 0;i<n1;i++){
            int index = s2[i] - 'a';
            count2[index]++;
        }
        if(equal(count1,count1 + 26,count2)){
            return true;
        }
        for(int i = n1;i < n2;i++){
            count2[s2[i] - 'a']++;
            count2[s2[i-n1] - 'a']--;
            if(equal(count1,count1 + 26,count2)){
                return true;
            }
        }
        return false;

    }
};
