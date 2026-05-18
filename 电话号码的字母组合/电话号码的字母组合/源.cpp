#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // 如果输入为空，返回空结果
        if (digits.empty())
        {
            return{};
        }
        //使用数组代替map，索引0-9，只用2-9
        vector<string> phoneMap = {
            "",     // 0
             "",    // 1
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };
        //初始化队列从空字符串开始
        queue<string>q;
        q.push("");
        //逐个处理输入的每个数字
        for (auto digit : digits)
        {
            int num = digit - '0';//将字符串转为整数,如'2'->2，可以作为phoneMap的索引
            string letters = phoneMap[num];
            int size = q.size();//当前队列中的组合数量
            //处理当前层的所有组合
            for (int i = 0; i < size; i++)
            {
                string current = q.front();
                q.pop();
                //将当前组合与当前数字的每个字母拼接
                //abc进入时current为空，所以current＋letter为'a','b','c'
                for (auto letter : letters)
                {
                    q.push(current + letter);
                }
            }
        }
        // 将队列中的所有结果转移到 vector 中
        vector<string>result;
        while (!q.empty())
        {
            result.push_back(q.front());//拿出队列的最前面的元素，但不删除
            //比如队列是 ["ad", "ae", "af", ...]，那么 q.front() 就是 "ad"
            //result.push_back(...)：把拿到的字符串添加到 result 向量的末尾
//相当于“把当前组合加入最终结果列表”
            q.pop();
            //删除队列最前面的那个元素，这样就可以拿第二个元素
        }
        return result;

    }
};
// 假设当前处理数字 '2'，current = ""（初始状态）

// phoneMap[2] → 返回字符串 "abc"
// string letters = "abc";
// for (char letter : letters) 是一个范围 for 循环，它的意思是：
// “让 letter 依次取字符串 letters 中的每一个字符”

// 所以循环会执行 3 次：

// 第几次	letter 的值	执行的操作
// 第1次	'a'	q.push("" + 'a') → "a" 入队
// 第2次	'b'	q.push("" + 'b') → "b" 入队
// 第3次	'c'	q.push("" + 'c') → "c" 入队
// ✅ 最终队列变成：["a", "b", "c"]

// 输入: "23"

// 步骤0: q = [""]
// 步骤1: 处理 '2' → q = ["a", "b", "c"]
// 步骤2: 处理 '3' → 
//        取出 "a" → 拼接 def → "ad","ae","af"
//        取出 "b" → 拼接 def → "bd","be","bf"
//        取出 "c" → 拼接 def → "cd","ce","cf"
//        q = ["ad","ae","af","bd","be","bf","cd","ce","cf"]

// 步骤3: result = ["ad","ae","af","bd","be","bf","cd","ce","cf"]