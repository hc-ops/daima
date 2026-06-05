#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <vector>
#include <iomanip>  // 包含 setw 函数

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> triangle;

    // 生成杨辉三角
    for (int i = 0; i < n; ++i) {
        vector<int> row(i + 1, 1);  // 每行初始化为 1
        for (int j = 1; j < i; ++j) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);
    }

    // 按照格式输出
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << setw(5) << triangle[i][j];
        }
        cout << endl;
    }

    return 0;
}