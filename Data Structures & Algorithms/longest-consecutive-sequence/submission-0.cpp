class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for (int num : nums){
            s.insert(num);
        }

        int ans = 0;
        for (int num : s){
            if (!s.count(num-1)){
                int length = 1;
                while (s.count(num + length)){
                    length++;
                }
                ans = max(ans, length);
            }
        }
        return ans;
    }
};
