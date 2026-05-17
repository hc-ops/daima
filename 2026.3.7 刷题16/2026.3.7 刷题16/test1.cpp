#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int ans = 0;//定义的游泳次数。
long double x, s = 2, d = 0;//x表示输入的距离，s表示小玉一次的游泳距离，d表示她游过的距离。
int main()
{
    cin >> x;
    while (d < x)//循环条件是游过的距离小于输入的距离，如果大于或等于，跳出循环。
    {
        d += s;//每次加上她游一次的距离。
        s = s * 0.98;//因为体力耗损，这一次游的距离为上一次的98%。
        ans++;//游泳次数每次增加一。
    }
    cout << ans << endl;//输出答案。
    return 0;//结束。
}

