class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<int>> rows;
        unordered_map<int, unordered_set<int>> cols;
        unordered_map<int, unordered_set<int>> squares;
        //square should be i/3

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                int num = board[i][j] - '0';

                if(rows[i].count(num)) return false;
                rows[i].insert(num);

                if(cols[j].count(num)) return false;
                cols[j].insert(num);

                int cords = (i/3) * 10 + (j/3);
                if(squares[cords].count(num)) return false;
                squares[cords].insert(num);

            }
        }
        return true;
    }
};
