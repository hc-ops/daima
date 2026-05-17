#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> apples(10);
    for (int i = 0; i < 10; i++) {
        cin >> apples[i];  // 读取每个苹果的高度
    }

    int b;
    cin >> b;  // 读取陶陶伸手高度
    b += 30;   // 加上板凳的高度

    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (b >= apples[i]) {
            sum += 1;  // 满足条件时累加
        }
    }

    cout << sum << endl;  // 输出结果
    return 0;
}