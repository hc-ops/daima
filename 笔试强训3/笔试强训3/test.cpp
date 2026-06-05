#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//1题
#include <iostream>
using namespace std;
int add(int a, int b)
{
    int z = 0;
    z = a + b;
    return z;
}
int main() {
    int a, b;
    // while(cin >> a >> b)// 注意，如果输入是多个测试用例，请通过while循环处理多个测试用例
    //     cout << a+b << endl;
    cin >> a >> b;
    int ret = 0;
    ret = add(a, b);
    cout << ret << endl;
    return 0;
}





//2题
// 本题为考试多行输入输出规范示例，无需提交，不计分。
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("请输入值 ");
    scanf("%d", &n);

    // 动态分配二维数组
    int** arr = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(n * sizeof(int));
    }

    // 输入矩阵元素
    printf("输入:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // 计算总和
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
    }

    printf("%d\n", sum);

    // 释放内存
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
#include<iostream>
using namespace std;
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 返回a+b的和
     * @param a int整型
     * @param b int整型
     * @return int整型
     */
    int add(int a, int b) {
        // write code here
        return a + b;
    }
};
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x = 0;
    int y = 0;
    cin >> x >> y;
    int ret = add(x, y);
    cout << ret << endl;
    return ret;
}