class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>>horizantal(9);
        vector<vector<int>>vertical(9);
        vector<vector<int>>squares(9);
        for(int i =0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    int num = (int)board[i][j];
                    if(find(horizantal[i].begin(), horizantal[i].end(), num) != horizantal[i].end())
                        return false;
                    if(find(vertical[j].begin(), vertical[j].end(), num) != vertical[j].end())
                        return false;
                    if(find(squares[i/3 * 3+j/3].begin(), squares[i/3 * 3+j/3].end(), num) != squares[i/3 * 3+j/3].end())
                        return false;
                    squares[i/3 * 3+j/3].push_back(num);
                    vertical[j].push_back(num);
                    horizantal[i].push_back(num);
                }
            }
        }
        return true;
    }
};