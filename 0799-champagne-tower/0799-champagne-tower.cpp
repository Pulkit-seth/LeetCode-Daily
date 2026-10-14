class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double tower [102][102] = {0.0};
        tower[0][0] = (double)poured;
        for(int row = 0; row <= query_row; row++){
            for(int col = 0; col <= row; col++){
                if(tower[row][col] > 1.0){
                    double flow = (tower[row][col] - 1.0)/2.0;
                    tower[row][col] = 1.0;
                    tower[row+1][col] += flow;
                    tower[row+1][col +1] += flow;
                }
            }
        }
        return tower[query_row][query_glass];
    }
};