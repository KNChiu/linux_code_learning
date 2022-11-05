class Solution {
public:
    void toWater(int x, int y, vector<vector<char>>& grid){
        grid[y][x] = '0';
        if (x != 0 && grid[y][x-1] == '1') toWater(x-1, y, grid);
        if(x != grid[0].size() - 1 && grid[y][x + 1] == '1') toWater(x + 1, y, grid);
        if(y != 0 && grid[y - 1][x] == '1') toWater(x, y - 1, grid);
        if(y != grid.size() - 1 && grid[y + 1][x] == '1') toWater(x, y + 1, grid);
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++){
                if (grid[i][j] == '1'){
                    count ++;
                    toWater(j, i, grid);
                }
            }
        }
        return count;
    }
};
