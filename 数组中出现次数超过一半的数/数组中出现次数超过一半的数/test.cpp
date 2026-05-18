#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param numbers int整型vector
     * @return int整型
     */
    int MoreThanHalfNum_Solution(vector<int>& numbers) {
        int count = 0;//票数
        int candidate = 0;//候选人
        for (auto num : numbers)
        {
            ////如果当前没有人有支持票（count == 0），就把当前元素 num 当作新的候选人，并给他一票。

//✅ 关键思想：相当于“重新开始投票”，之前的抵消完了，现在从新开始。
            if (count == 0)
            {
                candidate = num;
                count = 1;
            }
            else if (num == candidate)
            {
                //如果当前元素和候选人相同，说明是“自己人”，就给候选人加一票。
                count++;
            }
            else
            {
                //否则（当前元素 ≠ 候选人），就减一票。

//这代表“反对票”或“抵消机制”——不同元素相互抵消。
                count--;
            }
        }
        //return candidate;
        int cnt = 0;
        for (int num : numbers) {
            if (num == candidate) cnt++;
        }
        return cnt > numbers.size() / 2 ? candidate : -1;
    }
};
//这个算法就像一场“民主投票淘汰赛”，不同的数互相抵消，最后剩下的就是那个“绝对多数派”。
