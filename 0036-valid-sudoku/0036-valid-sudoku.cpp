class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
//          boolean[][] rows = new boolean[9][9];
//           boolean[][] cols = new boolean[9][9];
//            boolean[][] box = new boolean[9][9];
//         for(int i =0; i<9; i++) {
//             for(int j =0; j<9; j++) {
//                 if(board[i][j] != '.') {
//                     // return false;
//                     int nums = board[i][j] - '1';
//                     int boxindex = (i/3) *3 + (j/3);

//                     if(rows[i][nums] || cols[j][nums] || box[boxindex][nums]) {
//                         return false;
//                     }
//                     rows[i][nums] = cols[j][nums] = box[boxindex][nums] = true;
//                 }
//             }
//         }
//    return true; }
bool rows [9][9] = {false};
bool cols [9][9] = {false};
bool box [9][9] = {false};

for(int i =0; i<9; i++) {
    for(int j =0; j<9; j++) {
        if(board [i][j] != '.') {
            int num = board [i][j] - '1';
            int boxindex = (i/3) * 3 + (j/3);
            if(rows [i][num] || cols [j][num] || box [boxindex][num]) return false;
            rows [i][num] = cols [j][num] = box [boxindex][num] = true;
        }

    }
}
   return true; }
};