#define _CRT_SECURE_NO_WARNINGS 1
//洛谷 P5719 【深基4.例3】分类平均
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    double sumA = 0, sumB = 0;
    int countA = 0, countB = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            sumA += i;
            countA++;

        }
        else
        {
            sumB += i;
            countB++;
        }

    }
    double avgA = sumA / countA;
    double avgB = sumB / countB;
    cout << fixed << setprecision(1) << avgA << " " << avgB << endl;
    return 0;
}