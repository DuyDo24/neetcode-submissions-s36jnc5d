class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char , int> map2;
        unordered_map<char,int> map1;

        for (char c : s1){
            map1[c]++;
        }
        
        int size = s1.size();
        for (int i = 0; i < size; i++){
            map2[s2[i]]++;
        }
        for (int i = size; i < s2.size(); i++){
            if (map2 == map1){
                return true;
            }
            map2[s2[i-size]]--;
            if (map2[s2[i-size]] == 0){
                map2.erase(s2[i-size]);
            }
            
            map2[s2[i]]++;

        }
        if (map2 == map1){
                return true;
        }
        return false;
    }
};
