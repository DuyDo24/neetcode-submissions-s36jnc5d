class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> um = {{')', '('}, {'}','{'}, {']','['}};
        
        for (char c : s){
            if (um.count(c)){
                if (!st.empty() && um[c] == st.top()){
                    st.pop();
                } else {
                    return false;
                }
              
            } else {
                st.push(c);
            }
            
        }
        return st.empty();
    }
};
