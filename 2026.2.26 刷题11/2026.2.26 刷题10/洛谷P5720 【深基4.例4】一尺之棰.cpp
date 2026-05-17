#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

int main() {
    long long a; // 木棍的初始长度
    cin >> a;

    int days = 0; // 记录天数

    // 每天将木棍长度除以 2（向下取整），直到长度变为 1
    while (a > 1) {
        a /= 2;
        days++;
    }

    // 输出结果
    cout << days + 1 << endl; // 加 1 是因为从第二天开始锯

    return 0;
}