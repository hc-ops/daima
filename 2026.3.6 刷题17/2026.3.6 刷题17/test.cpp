#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
    long long N;
    cin >> N;
    bool isNegative = (N < 0);  // 判断 N 是否为负数：若 N < 0 则 isNegative = true，否则 false
    if (isNegative) {           // 如果 N 是负数
        N = -N;                 // 取绝对值（例如 -380 → 380），方便后续反转
    }
    long long reversedNum = 0;
    while (N > 0)
    {
        int lastDigit = N % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        N = N / 10;
    }
    if (isNegative)
    {
        reversedNum = -reversedNum;
    }
    cout << reversedNum << endl;
    return 0;
}