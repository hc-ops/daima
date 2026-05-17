#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    string order;
    cin >> order;
    // 将三个整数存入数组并排序
    vector<int>nums = { a,b,c };
    sort(nums.begin(), nums.end());
    // 创建映射：A->最小值, B->中间值, C->最大值
    map<char, int> numsMap;
    numsMap['A'] = nums[0];
    numsMap['B'] = nums[1];
    numsMap['C'] = nums[2];
    //根据顺序字符串输出结果
    for (int i = 0; i < order.size(); i++)
    {
        cout << numsMap[order[i]];//输出当前数字
        if (i < order.size() - 1) {  // 检查是否不是最后一个元素
            cout << " ";  // 如果不是最后一个，添加空格
        }
    }
    cout << endl;
    return 0;
}