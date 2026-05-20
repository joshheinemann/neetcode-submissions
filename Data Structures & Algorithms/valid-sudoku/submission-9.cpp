class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //make a hash map for rows, columns and 3x3 squares
        //for 3x3 squares, we will map each square by using integer division
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> squares;

        for(int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;
                //check if current position is in rows, if not add
                const char& curr = board[i][j];

                if(rows[i].count(curr)) return false;
                rows[i].insert(curr);

                //same thing for column now
                if(cols[j].count(curr)) return false;
                cols[j].insert(curr);

                //now for the individual 3x3 grid
                //first do integer division to determine which 3x3 the current num is in
                int x = i;
                x /= 3;
                x *= 10;
                int y = j;
                y /= 3;
                int cords = x + y;
                if(squares[cords].count(curr)) return false;
                squares[cords].insert(curr);
            }
        }
        return true;

    }
};
