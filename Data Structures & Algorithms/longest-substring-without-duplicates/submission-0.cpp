class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> dup;
        int ans = 0;
        int l = 0;
        int r = 0;

        while (r != s.size()){
            while (dup.count(s[r])){
                dup.erase(s[l]);
                l++;
            } 
             dup.insert(s[r]);
            r++;
            ans = max(ans, r - l);
        }
        return ans;
    }
};
