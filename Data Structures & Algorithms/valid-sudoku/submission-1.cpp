class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for (int i = 0; i < 9; i++){
            unordered_set<char> s;
            for (int j = 0; j < 9;j++){
                if (board[i][j] != '.'){
                    if (s.count(board[i][j])){
                        return false;
                    }
                    s.insert(board[i][j]);   
                }
            }
        }
        for (int i = 0; i < 9; i++){
            unordered_set<char> s;
            for (int j = 0; j < 9;j++){
                if (board[j][i] != '.'){
                    if (s.count(board[j][i])){
                        return false;
                    }
                    s.insert(board[j][i]);   
                }
            }
        }
        for (int row = 0; row < 9; row += 3){      // row = 0, 3, 6
    for (int col = 0; col < 9; col += 3){  // col = 0, 3, 6
        unordered_set<char> s;
        for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                char c = board[row+i][col+j];
                if (c != '.'){
                    if (s.count(c)) return false;
                    s.insert(c);
                }
            }
        }
    }
}
        return true;
        

    }
};
