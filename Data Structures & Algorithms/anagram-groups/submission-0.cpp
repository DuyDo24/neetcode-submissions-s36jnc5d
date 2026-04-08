class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;

        for (const auto& s : strs){
            vector<int> count (26,0);
            for (char c : s){
                count[c - 'a']++;
            }
            string key = "";
            for (int n : count){
                key += to_string(n) + ',';
            }
            um[key].push_back(s);
            
        }
        vector<vector<string>> results;
        for (auto& [key, group] : um){
            results.push_back(group);

        }
        return results;
    }
};
