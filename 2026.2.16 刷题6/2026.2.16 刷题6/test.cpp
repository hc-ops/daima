#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double m, h, weight;
    cin >> m >> h;
    weight = m / (h * h);
    if (weight < 18.5)
    {
        cout << "Underweight";
    }
    else if (weight >= 18.5 && weight < 24)
    {
        cout << "Normal";
    }
    else if (weight >= 24)
    {
        cout << setprecision(6) << weight << endl << "Overweight";
    }
    //std::setprecision(6) 设置精度为6位有效数字
    //不使用std::fixed - 这是关键！
    //如果使用std::fixed，std::setprecision会设置小数点后的位数
    //不使用std::fixed时，std::setprecision会设置有效数字的位数
    return 0;
}