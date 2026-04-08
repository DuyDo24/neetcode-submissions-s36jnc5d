class Solution {
public:
    bool isPalindrome(string s) {
        int length = s.size();
        int l = 0;
        int r = length - 1;
        
        while (r > l){
            while (l < r && !isalnum(s[l])) l++;
            while (l < r && !isalnum(s[r])) r--;

            if (tolower(s[r]) != tolower(s[l])){
                return false;
            }
            r--;
            l++;
        }
        return true;
    }
};
