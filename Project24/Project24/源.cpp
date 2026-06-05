#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) return 0;

        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    ++count;
                }
            }
        }

        return count;
    }

private:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int rows = grid.size();
        int cols = grid[0].size();


        if (i < 0 || i >= rows || j < 0 || j >= cols || grid[i][j] == '0')
            return;
        grid[i][j] = '0';
        dfs(grid, i - 1, j); // 上
        dfs(grid, i + 1, j); // 下
        dfs(grid, i, j - 1); // 左
        dfs(grid, i, j + 1); // 右
    }
};
int main() {
    vector<vector<char>> grid = {
        {'1','1','0','0','0'},
        {'0','1','0','1','1'},
        {'0','0','0','1','1'},
        {'0','0','0','0','0'},
        {'0','0','1','1','1'}
    };

    Solution sol;
    cout << "岛屿个数为：" << sol.numIslands(grid) << endl;

    return 0;
}