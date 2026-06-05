#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1¡¢
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == word[0]) {
                    visited[i][j] = true;
                    if (backtrack(i, j, 0, board, word, visited)) {
                        return true;
                    }
                    visited[i][j] = false;
                }
            }
        }
        return false;
    }

private:
    bool backtrack(int i, int j, int k,
        const vector<vector<char>>& board,
        const string& word,
        vector<vector<bool>>& visited) {
        if (k == word.size() - 1) {
            return true;
        }

        int directions[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} }; // ÉÏ ÏÂ ×ó ÓÒ
        for (auto& dir : directions) {
            int ni = i + dir[0];
            int nj = j + dir[1];

            if (ni >= 0 && ni < board.size() &&
                nj >= 0 && nj < board[0].size() &&
                !visited[ni][nj] &&
                board[ni][nj] == word[k + 1]) {

                visited[ni][nj] = true;
                if (backtrack(ni, nj, k + 1, board, word, visited)) {
                    return true;
                }
                visited[ni][nj] = false;
            }
        }
        return false;
    }
};