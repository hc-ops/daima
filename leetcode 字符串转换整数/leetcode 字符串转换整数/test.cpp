#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <climits> // INT_MAX, INT_MIN
class Solution {
public:
    int myAtoi(std::string s) {
        int i = 0;//遍历字符串
        int sign = 1;//判断正负，默认1为整数
        long result = 0;//结果
        //去除前导空格
        while (i < s.size() && s[i] == ' ')
        {
            ++i;
        }
        //判断符号
        if (i < s.size() && (s[i] == '-' || s[i] == '+'))
        {
            sign = (s[i] == '-') ? -1 : 1;
            ++i;

        }
        //读入数字字符并且把字符串转换为数字
        while (i < s.size() && isdigit(s[i]))
        {
            int digl = s[i] - '0';
            result = result * 10 + digl;
            if (result > INT_MAX)
            {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            ++i;

        }
        //返回结果
        //static_cast<>保证类型，显示类型转换
        return sign * static_cast<int>(result);
    }
};
